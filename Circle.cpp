#include "Circle.h"


Circle::Circle(const char* name, const Point& P, double radius) :Figure2D(radius*2,radius*2,P.getX(),P.getY())
{
	setName(name);
}
double Circle::Area()const { return PI * (getLength() /2) * (getLength() / 2); }
double Circle::Perimeter()const {	return 2 * PI *( getLength() / 2); }

double Circle::getCenterX()const { return getX() + getLength() / 2; }
double Circle::getCenterY()const { return getY() + getHeight() / 2; }
void Circle::print()const {
	cout << "Circle " << getName() << " with center (" << getCenterX() << ", " << getCenterY() << ") and radius = " << getLength()/2 << endl;

}
ostream& operator<<(ostream& o, Circle& d)
{

	o << "Circle " << d.getName() << " with center (" << d.getCenterX() << ", " << d.getCenterY() << ") and radius = " << d.getLength()/2 << endl;
	return o;
}