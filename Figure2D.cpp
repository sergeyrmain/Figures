#define _CRT_SECURE_NO_WARNINGS

#include "Figure2D.h"

#include <iostream>
#include <string>

using namespace std;

Figure2D::Figure2D(double l, double h, double x, double y) :x(x),y(y),length(l),height(h) {}


Figure2D::Figure2D(const Figure2D& f) :Figure2D(this->x,this->y,this->length,this->height){
	setName(f.name);
}

Figure2D::Figure2D(): x(0), y(0), length(0), height(0) {}

Figure2D::~Figure2D() 
{
	if (name!= NULL) delete[]name;
}

const Figure2D& Figure2D::operator=(const Figure2D& d) {
	this->x = d.x;
	this->y = d.y;
	this->length = d.length;
	this->height = d.height;
	delete[]name;
	this->setName(d.name);
	return *this;
}

void Figure2D::setName(const char* str)
{
	int size=0,i;
	while(str[size] !='\0') size++;
	name = new char[size+1];
	for(i=0;str[i]!='\0';i++) name[i] =str[i];
	name[i] ='\0';
}
double Figure2D::getX()const { return x; }

double Figure2D::getY()const { return y; }
double Figure2D::getLength()const { return length; }
double Figure2D::getHeight()const { return height; }
const char* Figure2D::getName()const { return name; }
double Figure2D::Area()const { return 0; }
double Figure2D::Perimeter() const { return 0; }
void Figure2D::Shift(double dx, double dy) 
{
	x += dx;
	y += dy;
}
void Figure2D::MoveTo(double newX, double newY)
{
	x = newX;
	y = newY;
}
void Figure2D::Resize(double newL, double newH) 
{
	length = newL;
	height = newH;
}
void Figure2D::Scale(double kx, double ky) 
{
	length *= kx;
	height *= ky;
}
bool Figure2D::isInside(Figure2D* P)
{
	if ((this->height >= P->height) && (this->length >= P->length))
	{
		double xEnd = x + length;
		double yEnd = y + height;
		if ((P->x >= x && P->x <= xEnd) && (P->y >= y && P->y <= yEnd))
		{
			return true;
		}
	}
	return false;
}

void Figure2D::print()const {}


ostream& operator<<(ostream& o,const Figure2D& d) {
	o <<d.getName()<< ": x=" << d.getX() << ", y=" << d.getY() << ", length=" << d.getLength() << ", height=" << d.getHeight();
	return o;
}