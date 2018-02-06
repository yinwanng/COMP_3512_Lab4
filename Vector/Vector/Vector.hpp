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
	Vector& operator--();   //prefix decrement
	Vector operator--(int); //postfix decrement

	friend void swap(Vector&, Vector&);
	Vector& operator=(Vector);

	//Please overload operator+=, 
	//operator+, 
	//operator -=, 
	//and operator-.
	Vector& operator+=(const Vector&);
	friend Vector operator+(Vector, const Vector &);

private:
	double x;
	double y;
	double z;
};