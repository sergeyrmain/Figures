#pragma once
#include "Figure2D.h"
#include "Point.h"
#define PI 3.1415926535897931

class Circle :
    public Figure2D
{
public:
    Circle(const char* name, const Point& P, double radius);
    double getCenterX()const;
    double getCenterY()const;
    void print()const;
    virtual double Area()const;
    virtual double Perimeter()const;
    friend ostream& operator<<(ostream& o, Circle& d);

};

