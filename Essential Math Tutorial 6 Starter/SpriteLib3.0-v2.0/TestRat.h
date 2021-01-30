#pragma once
#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class TestRat : public Scene 
{
public: 
	TestRat(std::string name);
	void InitScene(float windowWidth, float windowHeight) override;
	void Update() override;

	void KeyboardHold() override;
	void KeyboardUp() override;
	void KeyboardDown() override;

protected:
	PhysicsPlaygroundListener listener;
};

