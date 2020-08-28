#include "Rectangle.h"
#include <algorithm>
using namespace std;

Rectangle::Rectangle(const char* name, const Point& P1, const Point& P2) : Figure2D(0,0,P1.getX(),P2.getY())
{
	Resize(P2.getX() - P1.getX(), abs(P2.getY() - P1.getY()));
	setName(name);
}
Rectangle::Rectangle(const char* name, const Point& P, double side):Figure2D(side,side,P.getX(),P.getY())
{
	setName(name);
}

Rectangle::Rectangle(const char* name, double l, double h, double x, double y) : Figure2D(l, h, x, y)
{
	setName(name);
}

Rectangle::Rectangle() : Figure2D(0, 0, 0, 0)
{
	setName("No Name");
}

void Rectangle::print() const{
	double x1 = getX();
	double y1=getY();
	double x2= getX() + getLength();
	double y2 = getY()+ getHeight();
	cout << getName() << ": " << "Point(" << x1 << ", " << y1 << ")-Point(" << x2 << ", " << y2 << ")" << endl;
}
double Rectangle::Area()const { return getLength() * getHeight(); }
double Rectangle::Perimeter()const{ return 2* (getLength() + getHeight()); }
