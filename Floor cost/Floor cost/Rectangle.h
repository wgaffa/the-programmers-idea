#pragma once

#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(float width, float length) : Shape(), mWidth(width), mLength(length) {};
	~Rectangle() {};

	float area();

private:
	float mWidth;
	float mLength;
};
