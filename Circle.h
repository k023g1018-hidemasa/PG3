#pragma once
#include"IShape.h"
class Circle:public IShape
{
public:

	void Draw() override;
	void Size() override;
	float radius = 5;
	float PI = 3.14;
	float ans;
private:

};

