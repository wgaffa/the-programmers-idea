#pragma once

#include "shape.h"

class Triangle :
	public Shape
{
public:
	Triangle(float sides[3]) : mSides{ sides[0], sides[1], sides[2] } {};
	Triangle(Triangle &copy) : mSides{ copy.mSides[0], copy.mSides[1], copy.mSides[2] } {};
	virtual ~Triangle() {};

	float area();

private:
	float mSides[3];
};

