#include <iostream>
using namespace std;
#include <string>

int main()
{
	// int
	// (-32768 ~ 32767)
	short num1 = 10;

	int num2 = 10;

	long num3 = 10;

	long long num4 = 10;

	// sizeof
	cout << "short size: " << sizeof(num1) << endl;
	cout << "int size: " << sizeof(num2) << endl;
	cout << "long size: " << sizeof(num3) << endl;
	cout << "long long size: " << sizeof(num4) << endl;


	// float
	float f1 = 3.14f;
	cout << "f1 : " << f1 << endl;

	// double
	double d1 = 3.14;
	cout << "d1 : " << d1 << endl;

	cout << "float size: " << sizeof(f1) << endl;
	cout << "double size: " << sizeof(d1) << endl;

	// char
	char ch = 'a';
	cout << "size: " << sizeof(char) << endl;
	cout << (int)ch << endl;

	// char C and C++
	char str1[] = "Hallo world";
	cout << str1 << endl;

	string str2 = "Hallo world2";
	cout << str2 << endl;
	

	// bool
	bool flag = true;
	cout << "flag:" << flag << endl;


	// input
	int a = 0;
	cout << "input int: " << endl;
	cin >> a;
	cout << "int=" << a << endl;

	float f = 3.14f;
	cout << "input float" << endl;
	cin >> f;
	cout << "float=" << f << endl;

	system("pause");

	return 0;
}