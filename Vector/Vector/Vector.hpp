#pragma once

class Vector
{
public:
	Vector();
	Vector(const Vector&);
	Vector(double, double, double);
	double get_X() const;
	double get_Y() const;
	double get_Z() const;
private:
	double x;
	double y;
	double z;
};