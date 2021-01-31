#include "GravityTrigger.h"
#include "ECS.h"

void GravityTrigger::OnEnter()
{
	Trigger::OnEnter();
	if (gravityTriggerFlag == true)
	{
		ECS::GetComponent<GravitySwitch>(m_targetEntities[0]).SetGravityFlag(true);
	}
	
}

void GravityTrigger::OnExit()
{
	Trigger::OnExit();
	ECS::GetComponent<GravitySwitch>(m_targetEntities[0]).SetGravityFlag(false);
}