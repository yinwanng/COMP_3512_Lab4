#include "Vector.hpp"

Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::~Vector()
{
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

double Vector::get_Z() const
{
	return z;
}

void Vector::set_X(double x1)
{
	x = x1;
}

void Vector::set_Y(double y1)
{
	y = y1;
}

void Vector::set_Z(double z1)
{
	z = z1;
}

void Vector::clear()
{
	x = 0;
	y = 0;
	z = 0;
}

ostream & operator<<(ostream &out, const Vector &v)
{
	// TODO: insert return statement here
	out << "x:" << v.get_X() << " y:" << v.get_Y() << " z:" << v.get_Z();
	return out;

}
