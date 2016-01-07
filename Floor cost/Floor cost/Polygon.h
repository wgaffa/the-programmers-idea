#pragma once

#include <vector>

#include "shape.h"

class Polygon : public Shape
{
public:
	Polygon() : Shape() {};
	Polygon(std::vector<std::pair<int, int>> &v) : Shape(v) {};
	virtual ~Polygon() {};

	float area();

private:
	
};
