#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class MazeLevel : public Scene
{
public:
	MazeLevel(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;

	//player entity
	int player = 0;

	//Box entities
	int theBoxOne;
	int theBoxTwo;
	int theBoxThree;
};

