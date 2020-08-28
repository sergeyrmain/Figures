#pragma once
#include "Rectangle.h"
#include "Point.h"
class Square :
    public Rectangle
{

public:
    Square(const char* name, const Point& P1, const Point& P2);
    Square(const char* name, const Point& P, double side);
    Square(const Square& Sq);
    Square();
    double getCenterX()const;
    double getCenterY()const;
    void print()const;
    double Area()const;
    double Perimeter()const;
    virtual bool isInside(Figure2D* P);
    friend ostream& operator<<(ostream& o, Square& d);
};

