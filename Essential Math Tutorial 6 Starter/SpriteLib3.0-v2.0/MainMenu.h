#pragma once
#include "Scene.h"
class MainMenu : public Scene
{
public:
	MainMenu(std::string name);
	void InitScene(float windowWidth, float windowHeight) override;
	void Update() override;
	void KeyboardDown() override;
};

