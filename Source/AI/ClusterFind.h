//Balmer,K-D Lab
#ifndef __CLUSTERFIND_H__
#define __CLUSTERFIND_H__
#include "AIAStar.h"


#define CF_UP_BIT //Верхний бит в walk_map несёт разделительную функцию

class ClusterFind
{
public:
	struct Cluster
	{
		int x,y;//Левая верхняя точка.
		int xcenter,ycenter;//Не обязательно попадает в кластер
		uint8_t walk;//Сложность продвижения по этому куску
		bool temp_set;//Можно ли писать в link
		uint32_t self_id;

		std::vector<Cluster*> link;//С кем связанны.
		std::vector<uint32_t> index_link;//индекс в массиве all_cluster

		inline Cluster(){temp_set=true;}

		//Для AIAStarGraph
		typedef std::vector<Cluster*>::iterator iterator;
		inline iterator begin(){return link.begin();}
		inline iterator end(){return link.end();}
		void* AIAStarPointer;

	};

#ifdef CF_UP_BIT
	enum { UP_MASK=0x80,DOWN_MASK=0x7F,};
#endif 

	enum { 
		max_cluster_size = 8192,
	};


	ClusterFind(int dx,int dy,int max_distance=10);
	~ClusterFind();

	// Доступ к карте для заполнения перед Set/SetLater
	uint8_t* GetWalkMap(){ return walk_map; }

	//Создать сеть кластеров по walk_map
	void Set(bool enable_smooting);
	
	//Так как Set очень длительная операция, то 
	//разбить на несколько квантов
	void SetLater(struct ClusterFindPrm* prm);
	bool SetLaterQuant();//true - процесс завершён
	bool ready() const { return cur_quant_build >= quant_of_build; }

	template<class ClusterHeuristic>
	bool FindPath(const Vect2i& from, const Vect2i& to, std::vector<Vect2i>& out_path, ClusterHeuristic& heuristic)
	{
		heuristic.end = getCluster(to);

		std::vector<Cluster*> path;
		AIAStarGraph<ClusterHeuristic,Cluster> astar;
		astar.Init(all_cluster);
		if(!astar.FindPath(getCluster(from), &heuristic, path))
			return false;

		SoftPath(path, from, to, out_path);

		SoftPath2(out_path, dx, dy, walk_map, heuristic);

		if(out_path.size()>1){
			xassert(out_path.front() == from);
			out_path.erase(out_path.begin());
		}
		
		return true;
	}

	template<class ClusterHeuristic>
	bool FindPathMulti(const Vect2i& from, const std::vector<Vect2i>& to, std::vector<Vect2i>& out_path, ClusterHeuristic& heuristic)
	{
		std::vector<Vect2i>::const_iterator vi;
		FOR_EACH(to, vi)
			heuristic.addEnd(*vi, getCluster(*vi));

		std::vector<Cluster*> path;
		AIAStarGraph<ClusterHeuristic,Cluster> astar;
		astar.Init(all_cluster);
		if(!astar.FindPath(getCluster(from), &heuristic, path))
			return false;

		xassert(!path.empty());
		SoftPath(path, from, heuristic.to(path.back()), out_path);

		SoftPath2(out_path, dx, dy, walk_map, heuristic);

		if(out_path.size()>1){
			xassert(out_path.front() == from);
			out_path.erase(out_path.begin());
		}
		
		return true;
	}

	int GetNumCluster() { return all_cluster.size(); }

	inline Cluster* getCluster(const Vect2i& point)
	{
		xassert(point.x >= 0 && point.x < dx && point.y >= 0 && point.y < dy);
		xassert(ready());

		unsigned int index = pmap[point.y*dx + point.x] - 1;
		xassert(index < all_cluster.size());
		return &all_cluster[index]; 
	}

protected:
	int dx,dy;
	uint32_t* pmap;
	uint8_t* walk_map;

	enum{
		max_cell_in_front=64,
	};

	int max_distance;
	/*Vect2i*/
	typedef Vect2i Front;

	Front *pone,*ptwo;
	int size_one,size_two;

	std::vector<Cluster> all_cluster;

	uint8_t* is_used;//Для SoftPath
	uint32_t is_used_size;
	int is_used_xmin,is_used_xmax,is_used_ymin,is_used_ymax;

	//для SetLater
	int quant_of_build;//Сколько квантов необходимо для построения карты
	int cur_quant_build;
	int set_later_cur_num;


	/////////////////////////
	//	Private Members
	void Relink();
	void Smooting();
	//Добавлять, если temp_set==true
	std::vector<uint32_t> vtemp_set;//Для ClusterOne
	void ClusterOne(int x,int y,int id,Cluster& c);

	//Возвращает true, если нашёл путь на два шага вперёд
	bool IterativeFindPath(Vect2i from, Vect2i center,Vect2i to,
		Vect2i up,Vect2i up_to, std::vector<Vect2i>& path);
	enum LINE_RET
	{
		L_BAD=0,
		L_GOOD,
		L_COMPLETE
	};

	LINE_RET Line(int xfrom, int yfrom, int xto, int yto,
                  uint32_t prev, uint32_t eq, int& xeq, int& yeq, bool enable_add_one=false);

	bool LineWalk(int xfrom, int yfrom, int xto, int yto,
                  uint8_t max_walk);

	//То-же поиск волной. Ищет ячейки соприкасающиеся с to.
	void FindClusterFront(int x, int y, uint32_t to,
                          std::vector<Front>& front);

	void SoftPath(std::vector<Cluster*>& in_path,Vect2i from,Vect2i to,
		std::vector<Vect2i>& out_path);

	void BuildSidePath(std::vector<Vect2i>& in_path,
		std::vector<Vect2i>& out_path,
					int max_distance,bool left);

	void CheckAllLink();
};

template<class ClusterHeuristic>
void SoftPath2(std::vector<Vect2i>& out_path,
               int dx, int dy, uint8_t* walk_map,
               ClusterHeuristic& heuristic)
{
    //for(int iteration=0;iteration<2;iteration++)
    for(int i=1;i<out_path.size()-1;i++)
    {
        //Убрать эту точку
        Vect2i p0,p1,p2;
        p0=out_path[i-1];
        p1=out_path[i];
        p2=out_path[i+1];

        float l0,l1,lskip;
        bool b0,b1,bskip;

        lskip=HeuristicLine(p0.x,p0.y,p2.x,p2.y,
                            dx,dy,walk_map,heuristic,bskip);

        l0=HeuristicLine(p0.x,p0.y,p1.x,p1.y,
                         dx,dy,walk_map,heuristic,b0);

        l1=HeuristicLine(p1.x,p1.y,p2.x,p2.y,
                         dx,dy,walk_map,heuristic,b1);


        if(lskip<l0+l1)
        {
            if(bskip || b0 || b1)
            {
                int k=0;
            }

            out_path.erase(out_path.begin()+i);
            i--;
        }
    }
}

//Ещё большее сглаживание пути
template<class ClusterHeuristic>
float HeuristicLine(int xfrom, int yfrom, int xto, int yto,
                    int dx, int dy, uint8_t* walk_map, ClusterHeuristic& heuristic,
                    bool& debug_xor )
{
    float x,y;
    float lx,ly;
    if(xfrom==xto && yfrom==yto)return 0;
    xassert(xfrom>=0 && xfrom<dx && yfrom>=0 && yfrom<dy);
    xassert(xto>=0 && xto<dx && yto>=0 && yto<dy);

    x=xfrom;
    y=yfrom;

    lx=xto-xfrom;
    ly=yto-yfrom;
    int t,maxt;
    if(xm::abs(lx) > xm::abs(ly))
    {
        maxt= xm::abs(lx);
        ly= ly / xm::abs(lx);
        lx=(lx>0)?+1:-1;
    }else
    {
        maxt= xm::abs(ly);
        lx= lx / xm::abs(ly);
        ly=(ly>0)?+1:-1;
    }

    float sq_mul= xm::sqrt(sqr(lx) + sqr(ly));
    float len=0;
    uint8_t walk_from,walk_to;
    walk_from=walk_map[yfrom*dx+xfrom];

    debug_xor=false;

    for(t=0;t<maxt;t++)
    {
        x+=lx;y+=ly;

        int ix= xm::round(x),iy= xm::round(y);
        xassert(ix>=0 && ix<dx && iy>=0 && iy<dy);

        walk_to=walk_map[iy*dx+ix];
        float l=heuristic(walk_from,walk_to)*sq_mul;
        debug_xor|=((walk_from^walk_to)&ClusterFind::UP_MASK)?true:false;

        walk_from=walk_to;
        len+=l;
    }

    return len;
}

#endif //__CLUSTERFIND_H__