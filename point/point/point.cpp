#include<iostream>
using namespace std;

int main()
{
	// def point
	int a = 10;

	//int * p;
	//p = &a;

	int* p = &a;

	cout << &a << endl;
	cout << p << endl;

	// Using point
	*p = 1000;

	cout << *p << endl;
	cout << a << endl;

	cout << sizeof(p) << endl;

	// Null point
	int* p10 = NULL;


	// const
	int x = 10;
	int y = 10;

	const int * p1 = &x;
	p1 = &y;

	int * const p2 = &x;
	*p2 = 100;

	const int* const p3 = &x;


	// array and point

	int arr[] = { 9, 2, 3, 5 ,6 ,8 };

	int* pa = arr;

	cout << "first date for array: " << *pa << endl;

	//pa++;
	//cout << "first date for array for 2: " << *pa << endl;

	for (int i=0; i<6; i++)
	{
		cout << *pa << endl;
		pa++;
	}


	system("pause");

	return 0;
}