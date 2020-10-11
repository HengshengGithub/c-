#include<iostream>
using namespace std;
#include<string>

const double PI = 3.14159;

class Circle
{
public:

	int m_r;

	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

class Student
{
public:

	string name;
	int number;

	void show()
	{
		cout << "name: " << name << endl;
		cout << "number: " << number << endl;
	}

};


class Cube 
{
public:
	void setL(int l)
	{
		m_L = l;
	}

	double getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	double getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	double getH()
	{
		return m_H;
	}

	double calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}

	double calculateV()
	{
		return m_L * m_W * m_H;
	}

	bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}


private:
	double m_L;
	double m_W;
	double m_H;
};

bool isSame(Cube& cu, Cube& cu2)
{
	if (cu.getL() == cu2.getL() && cu.getW() == cu2.getW() && cu.getH() == cu2.getH())
	{
		return true;
	}
	return false;
}




int main()
{
	Circle c1;

	c1.m_r = 10;

	cout << c1.calculateZC() << endl;


	// student
	Student st;

	st.name = "Huang";
	st.number = 001;
	st.show();

	Student st1;

	st1.name = "Lin";
	st1.number = 002;
	st1.show();


	// cube
	Cube cu;
	cu.setL(10);
	cu.setH(10);
	cu.setW(10);

	cout << cu.calculateS() << endl;
	cout << cu.calculateV() << endl;

	Cube cu2;
	cu2.setL(10);
	cu2.setH(10);
	cu2.setW(10);

	bool ret = isSame(cu, cu2);
	if (ret)
	{
		cout << "gleich" << endl;
	}
	else
	{
		cout << "nicht gleich" << endl;
	}

	ret = cu.isSameByClass(cu2);
	if (ret)
	{
		cout << "gleich" << endl;
	}
	else
	{
		cout << "nicht gleich" << endl;
	}

	system("pause");
	return 0;
}