#ifndef __POINT_H__
#define __POINT_H__
#include "Figure2D.h"


class Point : public Figure2D
{
	

public:
	Point(const Point& P);
	Point(const char* name, double x, double y);
	virtual void Resize(double newL, double newH);
	virtual void Scale(double kx, double ky);
	void print() const;
};


#endif
