#pragma once
#include<iostream>
using namespace std;
#include<string>

class Cube
{
public:
	void setL(int l);


	double getL();


	void setW(int w);


	double getW();


	void setH(int h);


	double getH();


	double calculateS();


	double calculateV();


	bool isSameByClass(Cube& c);

private:
	double m_L;
	double m_W;
	double m_H;
};