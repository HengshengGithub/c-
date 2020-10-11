#include<iostream>
using namespace std;
#include<string>
#include "cube.h"



void Cube::setL(int l)
{
	m_L = l;
}

double Cube::getL()
{
	return m_L;
}

void Cube::setW(int w)
{
	m_W = w;
}

double Cube::getW()
{
	return m_W;
}

void Cube::setH(int h)
{
	m_H = h;
}

double Cube::getH()
{
	return m_H;
}

double Cube::calculateS()
{
	return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
}

double Cube::calculateV()
{
	return m_L * m_W * m_H;
}

bool Cube::isSameByClass(Cube& c)
{
	if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
	{
		return true;
	}
	return false;
}
