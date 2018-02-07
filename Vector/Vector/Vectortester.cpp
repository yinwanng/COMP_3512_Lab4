#include <iostream>
#include "Vector.hpp"

using std::cout;
using std::endl;

int main()
{
	cout << "Lab 4" << endl;
	cout << "(d) Default constructor" << endl;
	Vector a;
	cout << "a is " << a << endl; 

	cout << "\n(e) Three-parameter constructor" << endl;
	Vector b(10, 20, 30);
	cout << "b is " << b << endl;

	cout << "\n(f) Copy constructor - Vector c(b);" << endl;
	Vector c(b);
	cout << "c is " << c << endl;

	cout << "\n(g) three accessors " << endl;
	cout << "c.get_X() is " << c.get_X() << endl;
	cout << "c.get_Y() is " << c.get_Y() << endl;
	cout << "c.get_Z() is " << c.get_Z() << endl;

	cout << "\n(h) three mutators - c.set_X(11); c.set_Y(22); c.set_Z(33); " << endl;
	c.set_X(11);
	c.set_Y(22);
	c.set_Z(33);
	cout << "c.get_X() is " << c.get_X() << endl;
	cout << "c.get_Y() is " << c.get_Y() << endl;
	cout << "c.get_Z() is " << c.get_Z() << endl;

	cout << "\n(i)clear function on Vector c" << endl;
	c.clear();
	cout << "c is " << c << endl;

	Vector z(23, 30, 24);
	cout << "\n(k)Demonstrating insertion operator " << endl;
	cout << z << endl;

	cout << "\n(l)Demonstrating unary increment and decrement operators:" << endl;
	cout << "Z is " << z << endl;
	cout << "++z is \n" << ++z << endl;
	cout << "z++ is \n" << z++ << endl;
	cout << endl;
	Vector y(53, 2, 39);
	cout << "Y is " << y << endl;
	cout << "++y is \n" << ++y << endl;
	cout << "y++ is \n" << y++ << endl;

	cout << "\n(m)Demonstrating assignment operator using copy-and-swap:" << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;
	cout << "z = y" << endl;
	z = y;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;

	cout << "\n(n) Demonstrating binary arithmetic operators" << endl;
	cout << "Using +=" << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;
	cout << "z += y" << endl;
	z += y;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;

	cout << "\nUsing -=" << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;
	cout << "z -= y" << endl;
	z -= y;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;

	Vector v;
	cout << "\nUsing +" << endl;
	cout << "v is " << v << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;
	cout << "v = z + y" << endl;
	v = z + y;
	cout << "v is " << v << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;

	cout << "\nUsing -" << endl;
	cout << "v is " << v << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;
	cout << "v = z - y" << endl;
	v = z - y;
	cout << "v is " << v << endl;
	cout << "Z is " << z << endl;
	cout << "Y is " << y << endl;

	cout << "\n(o) First version of operator*" << endl;
	Vector q(5, 2, 3);
	Vector w(-8, 5, 1);
	cout << "q is " << q << endl;
	cout << "w is " << w << endl;
	cout << "q * w is " << q * w << endl;

	cout << "\n(o) Second version of operator*" << endl;
	cout << "q is " << q << endl;
	cout << "q * 2 is " << q * 2 << endl;

	system("pause");
	return 0;
}