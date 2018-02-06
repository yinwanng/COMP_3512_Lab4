#pragma once
#include <iostream>
using std::ostream;

class Vector
{
public:
	Vector();
	~Vector();
	Vector(const Vector&);
	Vector(double, double, double);
	double get_X() const;
	double get_Y() const;
	double get_Z() const;
	void set_X(double);
	void set_Y(double);
	void set_Z(double);
	void clear();
	friend ostream & operator<<(ostream &, const Vector &);
	Vector& operator++();   //prefix increment
	Vector operator++(int); //postfix increment


private:
	double x;
	double y;
	double z;
};