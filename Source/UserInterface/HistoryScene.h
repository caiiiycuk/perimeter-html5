#pragma once

#ifndef _HISTORYSCENE_H
#define _HISTORYSCENE_H

#include "AudioPlayer.h"
#include "SCodeInterpreter/Interpreter.hpp"
#include "SCodeInterpreter/Object3D.hpp"
#include "Silicon.h"
#include "HistorySceneCamera.h"
#include "History3D.h"

class HistoryScene : public Commander {
	public:
		HistoryScene();
		~HistoryScene();

		void init(cVisGeneric* visGeneric, bool bw, bool addBlendAlpha = true);
		void done();
		void setupAudio();
		void quant(const Vect2f& mousePos, float dt);
		void preDraw();
		void draw();
		void postDraw();

		void loadProgram(const std::string& programFileName);
		void start();
		void stop();

		void goToMission(int missionNumber);
		void goToJustAfterMissionPosition(int missionNumber);

		//Commander implementation
		void startAudio(const std::string& name);
		void startVideo(const std::string& reelName, const std::string& sndName);
		void startInterVideo(const std::string& reelName);
		void setMusic(const std::string& path);
		void addCameraPosition(
				const Vect3f& pivotPosition,
				float psi,
				float theta,
				float distanceToPivot);
		void clearCameraPath();
		void cameraFollowNomad(float deltaPsi, float radius, float theta);
		void executeMission(const std::string& fileName);
		void showText(const std::string& text, const std::string& icon);
		void hideText();
		void showPaused();
		void resetCamera();
		void finishHistory();

		void setNormalSpeedMode(bool normal);

		void stopAudio() {
			interpreter->eventOccured(Controller::END_OF_AUDIO_EVENT);
			voice.Stop();
            resetAudioPosition();
		}

		void audioStopped();

		bool isAudioPlaying() {
			return voice.IsPlay();
        }

        void resetAudioPosition() {
            if (voice.IsPlay()) {
                started_at = clock_us();
            } else {
                started_at = 0;
            }
		}

        float getAudioPosition() {
            if (started_at == 0 || !voice.IsPlay()) return 0.0f;
            float pos = static_cast<float>(static_cast<double>(clock_us() - started_at) / 1000000.0);
            pos /= voice.GetLen();
            return pos;
        }

		void onResolutionChanged();

		void waitFor(Controller::WaitEventType event);

		const Mission& getMission(int number) const {
			return interpreter->missions[number];
		}

		int missionCount() const {
			return interpreter->missions.size();
		}

		const Mission& getMissionToExecute() const {
			return interpreter->missions[missionNumberToExecute];
		}
		int getMissionNumberToExecute() const {
			return missionNumberToExecute;
		}
		void setMissionNumberToExecute(int number) {
			missionNumberToExecute = number;
		}

		Frame* getNomadFrame() const {
			return interpreter->getNomadFrame();
		}

		bool ready() {
			return (scene != 0);
		}
		Controller* getController() const {
			return interpreter;
		}
		HistorySceneCamera* getCamera() const {
			return historyCamera;
		}
		void playMusic();

		static std::string getFrameNameFromBase(const std::string& keyStr);
	protected:
		void drawPopup();
		void drawSprites();


		World* traceWorld(const Vect2f& pos);
		void createSkySphere(bool bw);
		void updateObjects(float dt);

		void createFrame3D(Frame* frame, cScene* scene);
		void createWorld3D(World* world, cScene* scene);
		void createLink3D(World* world, int linkNumber, cScene* scene);
		void createNomadMarker();

		void createBuildingLink(ContinuousCommand* cc, World* w1, World* w2);

		void updateNomadMarker(const Vect3f& cameraPos, float dt);
		void setupFrame3D(FrameCommand* fc, const Vect3f& toPoint, ContinuousCommand* cc, const Vect3f& vPos, bool shouldStartFlareEffect);
		void setupFrame3D(Frame* frame);
		void setupWorld3D(WorldSphere* worldSphere);
		void setupLink3D(LinkTubule* linkTubule);

		Interpreter* interpreter;
		cScene* scene;
		HistorySceneCamera* historyCamera;

		int missionNumberToExecute;
		
		cObjectNodeRoot* skySphere;
		cUnkLight* lightSky;
		cScene* sceneSky;
		cCamera* cameraSky;

		cTexture* worldTextures1[WorldSphere::MAX_TYPE];
		cTexture* worldTextures2[WorldSphere::MAX_TYPE];

		cTexture* linkSelected;
		cTexture* linkNormal;
		cTexture* electric;

		Controller::WaitEventType lastEvent;

		cFont* fnt;
		cFont* logFnt;
		cTexture* m_hPopupTexture;

		bool addBlendAlpha;

		MatXf initialMat;

		cObjectNodeRoot* nomadMarker;
		float timer;

		bool bwMode;

        uint64_t started_at = 0;
		SpeechPlayer voice;
		bool playingVoice;

		std::string musicNamePath;
};

#endif //_HISTORYSCENE_H