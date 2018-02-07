#include "Vector.hpp"

// Default constructor 
// PRE: n/a
// POST: Vector object created - x, y, z is initialized to 0
Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

// Destructor
Vector::~Vector()
{
	
}

// Copy constructor
// PRE: Vector object to copy
// POST: Vector object copied
Vector::Vector(const Vector & other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

// Constructor
// PRE: Specify 3 values that are double
// POST: Vector object created with x, y, z, assigned
Vector::Vector(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

// Get the value of data member x
// PRE: n/a
// POST: n/a
// RETURN: the value of x
double Vector::get_X() const
{
	return x;
}

// Get the value of data member y
// PRE: n/a
// POST: n/a
// RETURN: the value of y
double Vector::get_Y() const
{
	return y;
}

// Get the value of data member z
// PRE: n/a
// POST: n/a
// RETURN: the value of z
double Vector::get_Z() const
{
	return z;
}

// Set the value of data member x
// PRE: Specify the value for x
// POST: value of x specified has been assigned
void Vector::set_X(double x1)
{
	x = x1;
}

// Set the value of data member y
// PRE: Specify the value for y
// POST: value of y specified has been assigned
void Vector::set_Y(double y1)
{
	y = y1;
}

// Set the value of data member z
// PRE: Specify the value for z
// POST: value of z specified has been assigned
void Vector::set_Z(double z1)
{
	z = z1;
}

// All of the data members in the Vector object has been initialized to 0.
void Vector::clear()
{
	x = 0;
	y = 0;
	z = 0;
}

// Increment Vector's data members by 1
// PRE: n/a
// POST: data members is incremented
// RETURN: The vector object where the data members has been incremented by 1
Vector & Vector::operator++()
{
	x = x + 1;
	y = y + 1;
	z = z + 1;
	return *this;
}

// Increment Vector's data members by 1
// PRE: n/a
// POST: data members is incremented
// RETURN: The vector object where the data members has been incremented by 1
Vector Vector::operator++(int)
{
	Vector tmp(*this);
	operator++();
	return tmp;
}

// Decrement Vector's data members by 1
// PRE: n/a
// POST: data members is decremented
// RETURN: The vector object where the data members has been decremented by 1
Vector & Vector::operator--()
{
	x = x - 1;
	y = y - 1;
	z = z - 1;
	return *this;
}

// Decrement Vector's data members by 1
// PRE: n/a
// POST: data members is decremented
// RETURN: The vector object where the data members has been decremented by 1
Vector Vector::operator--(int)
{
	Vector tmp(*this);
	operator--();
	return tmp;
}

// Tears down the object's old state and builds its 
// new state as a copy of some other objects state
Vector & Vector::operator=(Vector other)
{
	swap(*this, other);
	return *this;
}

// Add the vector values
// POST: rhs vector values added 
// RETURN: vector with new values
Vector & Vector::operator+=(const Vector &rhs)
{
	x = x + rhs.x;
	y = y + rhs.y;
	z = z + rhs.z;
	return *this;
}

// Subtract the vector values
// POST: rhs vector values substracted 
// RETURN: vector with new values
Vector & Vector::operator-=(const Vector &rhs)
{
	x = x - rhs.x;
	y = y - rhs.y;
	z = z - rhs.z;
	return *this;
}

// Multiply the vector values
// PRE: Specify the multiply by value
// POST: vector values multiplied
// RETURN: vector with new values
Vector Vector::operator*(double v)
{
	x = x * v;
	y = y * v;
	z = z * v;
	return *this;
}

double & Vector::operator[](int i)
{
	// TODO: insert return statement here
	if (i == 0)
	{
		return x;
	}
	else if (i == 1)
	{
		return y;
	}
	else if (i == 2)
	{
		return z;
	}
}

// Prints the Vector to std::cout or other streams
ostream & operator<<(ostream &out, const Vector &v)
{
	out << "x:" << v.get_X() << " y:" << v.get_Y() << " z:" << v.get_Z();
	return out;

}

// Swap the data members
// PRE: The two vector objects required
// POST: The data memnbers are swapped
// RETURN: The vector object with its data members swapped
void swap(Vector &first, Vector &second)
{
	using std::swap;
	swap(first.x, second.x);
	swap(first.y, second.y);
	swap(first.z, second.z);
}

// Adds the rhs vector values to the lhs vector .
// RETURN: lhs vector with new values
Vector operator+(Vector lhs, const Vector &rhs)
{
	lhs += rhs;
	return lhs;
}

// Subtract the rhs vector values to the lhs vector .
// RETURN: lhs vector with new values
Vector operator-(Vector lhs, const Vector &rhs)
{
	lhs -= rhs;
	return lhs;
}

// Calculates the dot product
// PRE: Two vector references
// RETURN: The dot product of the vectors
double operator*(Vector &first, const Vector &second)
{
	return (first.x * second.x) + (first.y * second.y) + (first.z * second.z);
}