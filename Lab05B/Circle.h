////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Circle.h
// Programmer: Taylor Smith
// Date: 04/11/14
//
// Description: Presents the public interface for class Circle. Member-functions defined in
//              Circle. Included guards in this header file.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include "Rational.h"

using namespace std;

class Rational; 
class Circle
{
    
    friend class Rational;
    
private:
   
    Rational radius;
    const double PI = 3.14159;
    int xCoor;
    int yCoor;
    
public:
    Circle(Rational radius, int xCoor = 0, int yCoor = 0);
    void display();
    double getArea();
    double getCircumference();
    double getDistance(const Circle&);
    
};

#endif
