#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class MessingAround : public Scene
{
public:
	MessingAround(std::string name);
	std::string gravityDir = "down";
	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	void SpawnBullet();
	void ReattachCamera();
	bool spawnPlease = false;


	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;

protected:
	PhysicsPlaygroundListener listener;
	int player;
	int theBoxOne;
	int theBoxTwo;
	int theBoxThree;
};

