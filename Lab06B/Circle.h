////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Circle.h
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Determines the radius, area, volume of the object.
//
// Data-members: double radius;
//
// Member-functions:Circle(int x = 0, int y = 0, double radius = 0.0);
//                  ~Circle();
//                  friend ostream &operator << (ostream &output, Cirlce &c);
//                  int getRadius();
//                  double getArea();
//                  double getVolume();
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include "Shape.h"
#include "Point.h"

using namespace std;

// public inheritance of class Point/Shape
class Circle: public Point, public Shape
{
    
private:
    double radius;
    
public:
    // Constructors/Destructors
    Circle(int x = 0, int y = 0, double radius = 0.0);
    ~Circle();
    
    // overloaded stream Insertion Operator
    friend ostream &operator << (ostream &output, Circle &c);
    
    void setRadius(double);
    double getRadius();
    double getArea();
    double getVolume();
    
};
#endif