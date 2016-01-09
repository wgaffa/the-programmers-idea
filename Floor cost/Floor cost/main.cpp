#include <iostream>
#include <vector>
#include <algorithm>

#include "Polygon.h"
#include "Vertex.h"

int main(int)
{	
	std::vector<int> x_points = { 6, 5, 3, 1, 0 };
	std::vector<int> y_points = { 4, 1, 0, 1, 4 };

	std::vector<Vertex> vertices;
	vertices.resize(x_points.size());
	
	std::transform(x_points.begin(), x_points.end(), y_points.begin(), vertices.begin(), 
		[](int x, int y) { return std::make_pair(x, y);  }
	);
	
	Polygon polygon(vertices);

	std::cout << "Area: " << polygon.area() << std::endl;
	
	return 0;
}