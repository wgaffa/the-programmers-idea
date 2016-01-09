#include <iostream>

#include "Polygon.h"
#include "Vertex.h"

float Polygon::area()
{
	int total = 0;
	for (std::vector<Vertex>::iterator it = begin(); it != end(); it++)
	{
		std::pair<int, int> point = it->get_point();

		if (it == end() - 1)
		{
			total += point.first * (*this)[0].get_point().second - (*this)[0].get_point().first * point.second;
		}
		else
		{
			total += point.first * (it + 1)->get_point().second - (it + 1)->get_point().first * point.second;
		}
	}

	return abs(float(total) / 2);
}
