#include<iostream>
using namespace std;

int func(int a=10, int b=20, int c=30)
{
	return a + b + c;
}

void func1(int a, int)
{
	cout << "function" << endl;
}



int main()
{
	func(10, 10);

	cout << func(20) << endl;

	system("pause");
	return 0;

}