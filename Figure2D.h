#ifndef __FIGURE_2D_H__
#define __FIGURE_2D_H__

#include <math.h>
#include <iostream>
using namespace std;

class Figure2D {
private:
	double x;
	double y;
	double length;
	double height;
	char* name = NULL;//=NULL Needed for compiler of the testing engine
public:
	Figure2D(double l, double h, double x = 0, double y = 0);
	Figure2D(const Figure2D& f);
	Figure2D();
	virtual ~Figure2D();
	const Figure2D& operator=(const Figure2D& d);
	void setName(const char*);
	double getX()const;
	double getY()const;
	double getLength()const;
	double getHeight()const;
	const char* getName()const;
	virtual double Area()const;
	virtual double Perimeter()const;
	void Shift(double dx, double dy);
	void MoveTo(double newX, double newY);
	virtual void Resize(double newL, double newH);
	virtual void Scale(double kx, double ky);
	virtual bool isInside(Figure2D* P);//Point(P->getX(),P->getY()) lies inside the figure
	virtual void print() const  ;
	friend ostream& operator<<(ostream& o, const Figure2D& d);
};

ostream& operator<<(ostream& o, const Figure2D& d);

#endif