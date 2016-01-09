#pragma once

#include <vector>

#include "shape.h"

class Polygon : public Shape
{
public:
	Polygon() : Shape() {};
	Polygon(std::vector<Vertex> &v) : Shape(v) {};
	virtual ~Polygon() {};

	float area();

private:
	
};
