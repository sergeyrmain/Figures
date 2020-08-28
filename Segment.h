#ifndef __SEGMENT_H__
#define __SEGMENT_H__

#include "Figure2D.h"
#include "Point.h"

class Segment :
    public Figure2D
{
private:
    bool S_direction;
public:
    Segment(const char*, const Point& P1, const Point& P2);
    bool isUp(const Point& P1, const Point& P2)const;
    void print() const ;
    double Area()const;
    double Perimeter()const;
};

#endif

