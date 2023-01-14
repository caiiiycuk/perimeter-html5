#include "StdAfxRD.h"

#include "Scene.h"
#include "ObjNode.h"
#include "ObjMesh.h"
#include "MeshTri.h"
#include "TileMap.h"

#include "AnimChannel.h"
#include "Font.h"

#include "Silicon.h"

void cD3DRender::SetRenderTarget(cTexture* target,LPDIRECT3DSURFACE9 pZBuffer)
{
    FlushActiveDrawBuffer();
	for( int nPasses=0; nPasses<nSupportTexture; nPasses++ ) 
	{
		lpD3DDevice->SetTexture( nPasses, CurrentTexture[nPasses]=0 );
	}

	LPDIRECT3DSURFACE9 lpDDSurface=0;
	RDCALL((target->GetFrameImage(0)).d3d->GetSurfaceLevel(0,&lpDDSurface));
	RDCALL(lpD3DDevice->SetRenderTarget(0,lpDDSurface));
	RDCALL(lpD3DDevice->SetDepthStencilSurface(pZBuffer));

	if(!pZBuffer)
	{
		SetRenderState( D3DRS_ZENABLE, D3DZB_FALSE );
		SetRenderState( D3DRS_ZWRITEENABLE, FALSE ); 
	}

	lpDDSurface->Release();
}

void cD3DRender::RestoreRenderTarget()
{
    FlushActiveDrawBuffer();
	RDCALL(lpD3DDevice->SetRenderTarget(0,lpBackBuffer));
	RDCALL(lpD3DDevice->SetDepthStencilSurface(lpZBuffer));
	SetRenderState( D3DRS_ZENABLE, D3DZB_TRUE );
	SetRenderState( D3DRS_ZWRITEENABLE, TRUE ); 
}

void cD3DRender::SetDrawNode(cCamera *pDrawNode)
{
	if (DrawNode==pDrawNode||lpD3DDevice==0) return;
    FlushActiveDrawBuffer();
    cInterfaceRenderDevice::SetDrawNode(pDrawNode);
	if(DrawNode->GetRenderTarget())
	{
		LPDIRECT3DSURFACE9 pZBuffer=DrawNode->GetZBuffer();
		SetRenderTarget(DrawNode->GetRenderTarget(),pZBuffer);
		uint32_t color=0;
		if(pDrawNode->GetAttribute(ATTRCAMERA_SHADOW))
		{
			if(Option_ShadowType==SHADOW_MAP_SELF && 
				(dtAdvance->GetID()==DT_RADEON8500 ||
				dtAdvance->GetID()==DT_RADEON9700
				))
			{
				color=D3DCOLOR_RGBA(0,0,0,255);
				kShadow=0.25f;
			}else
			if(CurrentMod4==D3DTOP_MODULATE4X)
			{
				color=D3DCOLOR_RGBA(63,63,63,255);
				kShadow=0.25f;
			}
			else if(CurrentMod4==D3DTOP_MODULATE2X)
			{
				color=D3DCOLOR_RGBA(127,127,127,255);
				kShadow=0.5f;
			}else
			{
				color=D3DCOLOR_RGBA(255,255,255,255);
				kShadow=1.f;
			}
		}else
		{
//			color=D3DCOLOR_RGBA(63,63,63,255);
//			kShadow=0.25f;
			color=D3DCOLOR_RGBA(255,255,255,255);
			kShadow=1.3f;
		}

		if(!pDrawNode->GetAttribute(ATTRCAMERA_NOCLEARTARGET))
		{
			if(!pZBuffer)
			{
				RDCALL(lpD3DDevice->Clear(0,NULL,D3DCLEAR_TARGET,color,1,0));
			}else
			{
				RDCALL(lpD3DDevice->Clear(0,NULL,D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, color, 
					pDrawNode->GetAttribute(ATTRCAMERA_ZINVERT)?0:1, 0));
			}
		}
	}
	else
	{
		RestoreRenderTarget();
	}

	SetDrawTransform(pDrawNode);
}

void cD3DRender::SetDrawTransform(class cCamera *pDrawNode)
{
    FlushActiveDrawBuffer();
    isOrthoSet = false;
	RDCALL(lpD3DDevice->SetTransform(D3DTS_PROJECTION,reinterpret_cast<const D3DMATRIX*>(&pDrawNode->matProj)));
	RDCALL(lpD3DDevice->SetTransform(D3DTS_VIEW,reinterpret_cast<const D3DMATRIX*>(&pDrawNode->matView)));
	RDCALL(lpD3DDevice->SetViewport((D3DVIEWPORT9*)&pDrawNode->vp));
    if (pDrawNode->GetAttribute(ATTRCAMERA_REFLECTION) == 0) {
        CameraCullMode = CULL_CW;    // прямое изображение
    } else {
        CameraCullMode = CULL_CCW;    // отраженное изображение
    }
    SetRenderState(RS_CULLMODE, CameraCullMode);
}

void cD3DRender::SetWorldMat4f(const Mat4f* matrix) {
    FlushActiveDrawBuffer();
    isOrthoSet = false;
    if (!matrix) matrix = &Mat4f::ID;
    RDCALL(lpD3DDevice->SetTransform(D3DTS_WORLD, reinterpret_cast<const D3DMATRIX*>(matrix)));
};

void cD3DRender::DrawNoMaterial(cObjMesh *Mesh,sDataRenderMaterial *Data)
{
	SetWorldMatXf(Mesh->GetGlobalMatrix());
	if(Data->mat&MAT_TEXMATRIX_STAGE1)
	{
		Mat4f mat;
		MatXf &m=Data->TexMatrix;
		memset(&mat,0,sizeof(mat));
		mat.xx = m.rot()[0][0],	mat.xy = m.rot()[0][1];
		mat.yx = m.rot()[1][0],	mat.yy = m.rot()[1][1];
		mat.zx = m.trans().x,	mat.zy = m.trans().y;
		RDCALL(lpD3DDevice->SetTransform(D3DTS_TEXTURE0, reinterpret_cast<const D3DMATRIX*>(&mat)));
	}

	if(Data->mat&MAT_RENDER_SPHEREMAP)
	{ // сферический мапинг
		Mat4f mat;
		memset(&mat,0,sizeof(mat));
		mat.xx=mat.yy=mat.wx=mat.wy=0.5f;
		RDCALL(lpD3DDevice->SetTransform(D3DTS_TEXTURE1, reinterpret_cast<const D3DMATRIX*>(&mat)));
	}

	if(Option_DrawMeshScreen)
		DrawNoMaterialShadowNoWorld(Mesh);

}

void cD3DRender::DrawNoMaterialShadow(cObjMesh *Mesh)
{
	SetWorldMatXf(Mesh->GetGlobalMatrix());
	DrawNoMaterialShadowNoWorld(Mesh);
}

void cD3DRender::DrawNoMaterialShadowNoWorld(cObjMesh *Mesh)
{
    FlushActiveDrawBuffer();
	cMeshTri *Tri=Mesh->GetTri();
	RDCALL(lpD3DDevice->DrawIndexedPrimitive(D3DPT_TRIANGLELIST,
		0,
		Tri->GetOffsetVertex(),Tri->GetNumberVertex(),
		3*Tri->GetOffsetPolygon(),Tri->GetNumberPolygon()));

	NumberPolygon+=Tri->GetNumberPolygon();
	NumDrawObject++;
}

void cD3DRender::OutText(int x,int y,const char *string,const sColor4f& color,int align,eBlendMode blend_mode)
{
	if(CurrentFont==0)
	{
		VISASSERT(CurrentFont!=0);
		return;
	}
    FlushActiveDrawBuffer();
    
	SetTexture(CurrentFont->GetTexture(),0,0);
	SetTexture(NULL,0,1);
	SetTexture(NULL,0,2);
	SetBlendState(blend_mode);

	SetRenderState(D3DRS_SPECULARENABLE,FALSE);
	SetRenderState(D3DRS_LIGHTING,FALSE);
	SetRenderState(D3DRS_NORMALIZENORMALS,FALSE);


	SetTextureStageState( 0, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_DISABLE );
	SetTextureStageState( 0, D3DTSS_TEXCOORDINDEX, 0 );

	SetTextureStageState( 0, D3DTSS_COLOROP, D3DTOP_SELECTARG2);
	SetTextureStageState( 0, D3DTSS_ALPHAOP, D3DTOP_MODULATE );
	SetTextureStageState( 1, D3DTSS_COLOROP, D3DTOP_DISABLE );
	SetTextureStageState( 2, D3DTSS_COLOROP, D3DTOP_DISABLE );

	if(CurrentFont->GetScale().x>1.01f || CurrentFont->GetScale().y>1.01f)
		SetRenderState(RS_BILINEAR,1);
	else
		SetRenderState(RS_BILINEAR,0);
    
    cInterfaceRenderDevice::OutText(x,y,string,color,align,blend_mode);
    FlushActiveDrawBuffer();
}

void cD3DRender::OutText(int x,int y,const char *string,const sColor4f& color,int align,eBlendMode blend_mode,
                         cTexture* pTexture,eColorMode mode,Vect2f uv,Vect2f duv,float phase,float lerp_factor) {
    FlushActiveDrawBuffer();
    
    SetNoMaterial(blend_mode, phase, pTexture, CurrentFont->GetTexture(), mode);
    
    uint32_t index1=GetTextureStageState(1, D3DTSS_TEXCOORDINDEX);
    SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0);
    SetTextureStageState(1,D3DTSS_TEXCOORDINDEX,1);

    SetRenderState(RS_BILINEAR,0);

    sColor4c lerp(255*lerp_factor,255*lerp_factor,255*lerp_factor,255*(1-lerp_factor));
    SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_MODULATECOLOR_ADDALPHA);
    SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_TFACTOR);
    SetTextureStageState(0,D3DTSS_COLORARG2,D3DTA_TEXTURE);
    SetRenderState(D3DRS_TEXTUREFACTOR, ConvertColor(lerp));

    SetTextureStageState(1,D3DTSS_ALPHAOP,D3DTOP_MODULATE);
    SetTextureStageState(1,D3DTSS_ALPHAARG1,D3DTA_TEXTURE);
    SetTextureStageState(1,D3DTSS_ALPHAARG2,D3DTA_DIFFUSE);

	SetTextureStageState(1,D3DTSS_COLOROP,D3DTOP_MODULATE);
    SetTextureStageState(1,D3DTSS_COLORARG1,D3DTA_DIFFUSE);
    SetTextureStageState(1,D3DTSS_COLORARG2,D3DTA_CURRENT);

    cInterfaceRenderDevice::OutText(x,y,string,color,align,blend_mode,pTexture,mode,uv,duv,phase,lerp_factor);
    FlushActiveDrawBuffer();

    SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0);
    SetTextureStageState(1,D3DTSS_TEXCOORDINDEX,index1);

    SetTextureStageState( 0, D3DTSS_COLOROP,   D3DTOP_MODULATE);
    SetTextureStageState( 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
    SetTextureStageState( 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);

    SetTextureStageState( 0, D3DTSS_ALPHAOP,   D3DTOP_DISABLE );
    SetTextureStageState( 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE );
    SetTextureStageState( 0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE );

    SetTextureStageState( 1, D3DTSS_COLOROP,   D3DTOP_DISABLE );
    SetTextureStageState( 1, D3DTSS_COLORARG1, D3DTA_TEXTURE );
    SetTextureStageState( 1, D3DTSS_COLORARG2, D3DTA_CURRENT );

    SetTextureStageState( 1, D3DTSS_ALPHAOP,   D3DTOP_DISABLE );
    SetTextureStageState( 1, D3DTSS_ALPHAARG1, D3DTA_TEXTURE );
    SetTextureStageState( 1, D3DTSS_ALPHAARG2, D3DTA_CURRENT );
}

void cD3DRender::Draw(class ElasticSphere *es) {
    cInterfaceRenderDevice::Draw(es);

    int is = es->theta_size;
    int js = es->psi_size;
    NumberPolygon += (is+1) * (js+1) + (is+2) * (js-1) - 2;
	NumDrawObject++;
}
