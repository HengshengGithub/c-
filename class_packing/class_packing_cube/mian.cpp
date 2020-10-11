#include<iostream>
using namespace std;
#include<string>
#include "cube.h"


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