#include<iostream>
using namespace std;

int main()
{
	int s[5] = {10, 20, 30, 5 ,68};

	//cout << s[3] << endl;

	int s1[] = { 5, 5, 1, 98, 59, 6, 5 };

	int len1 = sizeof(s1) / sizeof(s1[0]);

	for (int i = 0; i < len1; i++)
	{
		cout << s1[i] << endl;
	}

	cout << "size: " << sizeof(s) << endl;
	cout << "size for one: " << sizeof(s[0]) << endl;

	//length of array
	int len = sizeof(s) / sizeof(s[0]);

	cout << "length of array: " << len << endl;


	// 2D array

	int a[2][3] =
	{
		{1, 2, 3},
		{2, 3, 5}
	};

	int a2[][3] = { 1, 2, 3, 4, 5, 6 };


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a2[i][j] << " ";
		}
		cout << endl;
	}


	//行数与列数

	cout << "H: " << sizeof(a) / sizeof(a[0]) << endl;
	cout << "L: " << sizeof(a[0]) / sizeof(a[0][0]) << endl;


	system("pause");

	return 0;
}