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
	c*(2);
	cout << "c: " << c << endl;

	cout << "operator * first technique" << endl;
	Vector q(5, 2, 3);
	Vector w(-8, 5, 1);
	cout << q * w << endl;

	cout << "operator * second technique" << endl;

	cout << c * 2;

	


	cout << endl;
	system("pause");
	return 0;
}