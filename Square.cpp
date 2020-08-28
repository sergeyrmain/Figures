#include "Square.h"

Square::Square(const char* name, const Point& P1, const Point& P2) :Rectangle(name, P1, P2) {
}
Square::Square(const char* name, const Point& P, double side): Rectangle(name,P,side)
{}
Square::Square():Rectangle(){}

Square::Square(const Square& Sq):Rectangle(Sq.getName(),Sq.getLength(),Sq.getHeight(),Sq.getX(),Sq.getY()){}

double Square::Area()const { return getLength() * getLength(); }
double Square::Perimeter()const { return 4 * getLength();}

double Square::getCenterX()const { return getX() + getLength() / 2; }
double Square::getCenterY() const {return  getY() + getHeight() / 2; }
void Square::print()const {
	cout<< "Square " << getName() << " with center (" << getCenterX() << ", " << getCenterY() << ") and side = " << getLength()<<endl;

}

bool Square::isInside(Figure2D* P) {
	double endSquareY, StartSquareY;
	double k = (this->getHeight() - this->getLength()) / 2;
	StartSquareY = this->getY() + k;
	endSquareY = this->getHeight() - k;
	if (((P->getY() >= StartSquareY) && (P->getY() <= endSquareY)) && ((this->getX() <= P->getX()) && (P->getX() <= this->getX() + this->getLength())))
	{
		return true;
	}
	return false;
}

ostream& operator<<(ostream& o, Square& d)
{

	o << "Square " << d.getName() << " with center (" << d.getCenterX() << ", " << d.getCenterY() << ") and side = " << d.getLength()<<endl;
	return o;
}