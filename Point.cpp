#include "Point.h"


Point::Point(const char* str, double x, double y) : Figure2D(0, 0, x, y)
{
	setName(str);
}

void Point::Resize(double newL, double newH)
{
	Figure2D::Resize(0, 0);
}
void Point::Scale(double kx, double ky)
{
	Figure2D::MoveTo(kx*getX(), ky*getY());
}
Point::Point(const Point& P):Figure2D(0,0,P.getX(),P.getY()){}
void Point::print() const
{
	
	cout << "Pt: (" << getX() << ", " << getY() << ")" << endl;
}
