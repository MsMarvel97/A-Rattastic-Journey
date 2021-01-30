#pragma once
class DestroyBox
{
public:
	void SetBox1(bool check);//setter
	bool GetBox1();//getter

	void SetBox2(bool check);//setter
	bool GetBox2();//getter

	void SetBox3(bool check);//setter
	bool GetBox3();//getter

protected:
	bool box1 = false;
	bool box2 = false;
	bool box3 = false;
};

