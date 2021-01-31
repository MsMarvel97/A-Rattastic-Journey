#include "GravitySwitch.h"

void GravitySwitch::SetGravityFlag(bool flipGravity)
{
	gravityFlag = flipGravity;
}

bool GravitySwitch::GetGravityFlag()
{
	return gravityFlag;
}
