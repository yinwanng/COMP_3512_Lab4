#include "Vector.hpp"

Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(const Vector & other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

Vector::Vector(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

double Vector::get_X() const
{
	return x;
}

double Vector::get_Y() const
{
	return y;
}
