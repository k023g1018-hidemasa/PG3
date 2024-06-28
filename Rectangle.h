#pragma once
#include"IShape.h"
class Rectangle :public IShape
{
public:

	void Draw() override;
	void Size() override;
	float vertical=5;
	float beside = 10;
	float ans1;

private:






};

