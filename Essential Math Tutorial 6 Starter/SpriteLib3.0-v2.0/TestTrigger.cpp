#include "TestTrigger.h"
#include "ECS.h"

void TestTrigger::OnEnter()
{
	Trigger::OnEnter();
	switch (boxNumber)
	{
	case(0):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox1(true);
		break;
	case(1):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox2(true);
		break;
	case(2):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox3(true);
		break;

	}
}

void TestTrigger::OnExit()
{
	Trigger::OnExit();
	switch (boxNumber)
	{
	case(0):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox1(false);
		break;
	case(1):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox2(false);
		break;
	case(2):
		ECS::GetComponent<DestroyBox>(m_targetEntities[0]).SetBox3(false);
		break;
	}
}