#include<iostream>
using namespace std;
#include "swap.h"

//int add(int num1, int num2);

int main()
{
	int num1 = 0;
	int num2 = 0;

	cout << "input num1: ";
	cin >> num1;
	cout << endl;

	cout << "input num2: ";
	cin >> num2;
	cout << endl;

	int sum = add(num1, num2);

	cout << "sum = " << sum << endl;



	system("pause");
	return 0;

}
//
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}