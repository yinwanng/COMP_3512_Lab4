#pragma once
#include <iostream>
using std::ostream;

class Vector
{
public:
	// constructor & destructor
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

	// insertion overloaded
	friend ostream & operator<<(ostream &, const Vector &);

	// unary increment and decrement
	Vector& operator++();   //prefix increment
	Vector operator++(int); //postfix increment
	Vector& operator--();   //prefix decrement
	Vector operator--(int); //postfix decrement

	// assignment and swap
	friend void swap(Vector&, Vector&);
	Vector& operator=(Vector);

	// +=, +, -=, -
	Vector& operator+=(const Vector&);
	friend Vector operator+(Vector, const Vector &);
	Vector& operator-=(const Vector &);
	friend Vector operator-(Vector, const Vector &);

	// *
	friend double operator*(Vector &, const Vector &);
	Vector operator*(double);

	// bonus
	double& operator[](int);

private:
	double x;
	double y;
	double z;
};