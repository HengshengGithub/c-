#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
}s3;

struct Teacher
{
	int id;
	string name;
	struct Student s6
};

int main()
{
	// Methode 1
	Student s1;
	s1.name = "Huang";
	s1.age = 26;
	s1.score = 100;

	cout << s1.name << " " << s1.age << " " << s1.score << endl;


	// Methode 2
	struct Student s2 = { "Lin", 25, 99 };

	cout << s2.name << " " << s2.age << " " << s2.score << endl;


	// Methode 3
	s3 = { "Guo", 30, 98 };
	cout << s3.name << " " << s3.age << " " << s3.score << endl;
	cout << endl;



	// with array
	struct Student arr[3] =
	{
		{"Li", 12, 83},
		{"Hu", 23, 73},
		{"Zhang", 27, 69}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].score << endl;
	}
	cout << endl;



	// pointer
	struct Student s5 = { "Thomas", 30, 36 };

	struct Student* p = &s5;

	p->score = 33;

	cout << p->name << " " << p->age << " " << p->score << endl;



	// 嵌套
	Teacher t1;
	t1.id = 001;
	t1.name = "Wang";
	t1.s6.name = "Chen";
	t1.s6.age = 28;
	t1.s6.score = 73;
	


	return 0;
}