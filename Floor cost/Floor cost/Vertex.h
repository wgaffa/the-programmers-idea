#pragma once

#include <ostream>
#include <utility>

class Vertex
{
public:

	Vertex() : mPoint(0, 0) {}
	Vertex(std::pair<int, int> point) : mPoint(point) {}
	Vertex(int pointX, int pointY) : mPoint(pointX, pointY) {}

	virtual ~Vertex() {}

	// Get/Set methods
	const std::pair<int, int>& get_point() const { return mPoint; }
	void set_point(const std::pair<int, int> &point) { mPoint = point; }
	void set_point(const int x, const int y) { mPoint = std::make_pair(x, y); }

	friend std::ostream& operator<<(std::ostream &os, Vertex &vertice)
	{
		return os << "(" << vertice.mPoint.first << ", " << vertice.mPoint.second << ")";
	}

private:
	std::pair<int, int> mPoint;
};

