#include <iostream>
using namespace std;
#include <string>

int main()
{
	// plus
	int a1 = 5;
	int a2 = 3;

	cout << a1 + a2 << endl;
	cout << a1 * a2 << endl;
	cout << "int/int: " << a1 / a2 << endl;

	double d1 = 5.3;
	double d2 = 2.23;
	cout << "double / double: " << d1 / d2 << endl;


	// immer plus
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	int b = 10;
	b++;
	cout << "b = " << b << endl;



	int a10 = 10;
	int b10 = ++a10 * 10;
	cout << "a10 = " << a10 << endl;
	cout << "b10 = " << b10 << endl;

	int a11 = 10;
	int b11 = a11++ * 10;
	cout << "a11 = " << a11 << endl;
	cout << "b11 = " << b11 << endl;

	system("pause");

	return 0;
}