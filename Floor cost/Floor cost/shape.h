#pragma once

#include <vector>

#include "Vertex.h"

class Shape : public std::vector<Vertex>
{
public:
	Shape() : std::vector<Vertex>() {};
	Shape(std::vector<Vertex> &v) : std::vector<Vertex>(v) {};
	virtual ~Shape() {};

	virtual float area() = 0;
private:
	
};
