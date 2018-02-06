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
	void set_X(double);
	void set_Y(double);
	void set_Z(double);
	void clear();
private:
	double x;
	double y;
	double z;
};