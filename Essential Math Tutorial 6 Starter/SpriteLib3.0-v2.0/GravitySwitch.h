#pragma once
class GravitySwitch
{
public:
	void SetGravityFlag(bool flipGravity);//setter
	bool GetGravityFlag();//getter

protected:
	bool gravityFlag = false;
};

