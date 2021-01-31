#pragma once
#include "Trigger.h"
class GravityTrigger : public Trigger
{
public:
	void OnEnter() override;
	void OnExit() override;
};

