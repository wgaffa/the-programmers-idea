#include <iostream>

#include "Polygon.h"

float Polygon::area()
{
	int total = 0;
	for (std::vector<std::pair<int, int>>::iterator it = begin(); it != end(); it++)
	{
		std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;

		if (it == end() - 1)
		{
			total += it->first * (*this)[0].second - (*this)[0].first * it->second;
		}
		else
		{
			total += it->first * (it + 1)->second - (it + 1)->first * it->second;
		}
	}

	return abs(float(total) / 2);
}
