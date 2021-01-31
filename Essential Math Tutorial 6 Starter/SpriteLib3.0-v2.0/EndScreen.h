#pragma once
#include "Scene.h"

class EndScreen : public Scene
{
public:
	EndScreen(std::string name);
	void InitScene(float windowWidth, float windowHeight) override;
	void Update() override;
	void KeyboardDown() override;
};