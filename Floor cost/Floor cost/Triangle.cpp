#include "Triangle.h"

#include <math.h>

float Triangle::area()
{
	float area = 0;
	float s = (mSides[0] + mSides[1] + mSides[2]) / 2;

	area = sqrt(s * (s - mSides[0]) * (s - mSides[1]) * (s - mSides[2]));

	return area;
}
