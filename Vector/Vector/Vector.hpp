#pragma once

class Vector
{
public:
	Vector();
	Vector(const Vector&);
	Vector(double, double, double);
	double get_X() const;
private:
	double x;
	double y;
	double z;
};