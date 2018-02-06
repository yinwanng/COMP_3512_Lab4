#include <iostream>
#include "Vector.hpp"

using std::cout;
using std::endl;

int main()
{
	cout << "Lab 4" << endl;
	
	Vector a;
	Vector b;
	a++;
	b++;
	Vector c;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	c = a + b;
	cout << "c: " << c << endl;
	


	cout << endl;
	system("pause");
	return 0;
}