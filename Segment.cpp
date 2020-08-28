#include "Segment.h"
#include "Point.h"
#include <math.h>
Segment::Segment(const char* name, const Point& P1, const Point& P2) : Figure2D(), S_direction(isUp(P1, P2))
{
	Resize(P2.getX() - P1.getX(), abs(P2.getY() - P1.getY()));
	if (S_direction)  MoveTo(P1.getX(), P1.getY());
	else MoveTo(P1.getX(), P1.getY() - getHeight());
	setName(name);
}
double Segment::Area()const
{
	return 0.0;
}



double Segment::Perimeter()const
{
	return sqrt(pow(getHeight(),2)+pow(getLength(),2));
}


bool Segment::isUp(const Point& P1, const Point& P2)const
{
	return P2.getY() > P1.getY();
}

void Segment::print() const
{

	double x1;
	double y1;
	double x2;
	double y2;

	if (S_direction)
	{
		x1 = getX();
		y1 = getY();
		x2 = getX() + getLength();
		y2 = getY() + getHeight();

	}
	else
	{
		x1 = getX();
		y1 = getY() + getHeight();
		x2 = getX() + getLength();
		y2 = getY();
	}
	//Segment PQ : Point(10, 24) - Point(22, 0)

	cout <<getName() <<": " << "Point(" << x1 << ", " << y1 << ")-Point("<<x2 <<  ", " << y2 << ")"<<endl;
}
