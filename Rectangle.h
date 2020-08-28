#pragma once
#include "Figure2D.h"
#include"Point.h"

class Rectangle :
	public Figure2D
{
public:
	Rectangle(const char* name, const Point& P1, const Point& P2);
	Rectangle(const char* name, const Point& P, double side);
	Rectangle(const char* name,  double l,  double h,  double x,  double y);
	Rectangle();
	void print() const;
	double Area()const;
	double Perimeter()const;
};