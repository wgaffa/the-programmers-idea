#pragma once

#include <vector>

class Shape : public std::vector<std::pair<int, int>>
{
public:
	Shape() : std::vector<std::pair<int, int>>() {};
	Shape(std::vector<std::pair<int, int>> &v) : std::vector<std::pair<int, int>>(v) {};
	virtual ~Shape() {};

	virtual float area() = 0;
private:
	
};
