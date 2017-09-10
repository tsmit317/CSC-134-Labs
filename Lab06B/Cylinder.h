////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Cylinder.h
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Determines the height, area, volume of the object.
//
// Data-members: double height;
//
// Member-functions:Cylinder(int x = 0, int y = 0, double r = 0.0, double h = 0.0);
//                  ~Cylinder();
//                  friend ostream &operator << (ostream &output, Cylinder &cyl);
//                  void setHeight(double);
//                  double getHeight();
//                  double getArea();
//                  double getVolume();
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

// public inheritance of class Circle
class Cylinder : public Circle
{
private:
    double height;
    
public:
    // Constructors/Destructors
    Cylinder(int x = 0, int y = 0, double r = 0.0, double h = 0.0);
    ~Cylinder();
    
    // overloaded stream Insertion Operator
    friend ostream &operator << (ostream &output, Cylinder &cyl);
    
    void setHeight(double);
    double getHeight();
    double getArea();
    double getVolume();
    

    
};

#endif /* defined(__Lab06B__Cylinder__) */
