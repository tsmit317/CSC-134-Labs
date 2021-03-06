////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Cylinder.cpp
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Contains definitions for class Cylinder.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "Cylinder.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Member-function:ostream &operator << (ostream &output, Cylinder &cyl)
//
// Definition: overloaded stream Insertion Operator
//
// Returns: output
//
//////////////////////////////////////////////////////////////////////////////////////////////////

ostream &operator << (ostream &output, Cylinder &cyl)
{
    output << "(xCoor, yCoor, radius, height) = (" << cyl.getXCoor() << "," << cyl.getYCoor() << "," << cyl.getRadius() << "," << cyl.height << ")" << endl;
    return output;
    
}

// constructor
Cylinder::Cylinder(int x, int y, double r, double h)
: Circle(x, y, r)
{
    setHeight(h);
    
    cout << "Cylinder Constructor called: with height = " << height << endl;
}

// destructor
Cylinder::~Cylinder()
{
    cout <<  "Cylinder Destructor called: with height = " << height << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Member-function: void setHeight(double h)
//
// Definition: sets height equal to h.
//
// Returns: none
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void Cylinder::setHeight(double h)
{
    height = h;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Member-function: double getHeight()
//
// Definition: gets height
//
// Returns: height
//
//////////////////////////////////////////////////////////////////////////////////////////////////

double Cylinder::getHeight()
{
    return height;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Member-function: double getArea()
//
// Definition: Calculates the area of the Cylinder.
//
// Returns: area
//
//////////////////////////////////////////////////////////////////////////////////////////////////

double Cylinder::getArea()
{
    double area = 0.0;
    
    area = (2 * PI * getRadius() * getRadius()) + (2 * PI * getRadius() * height);
    
    return area;

}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Member-function: double getVolume()
//
// Definition: Calculates the volume of the Cylinder.
//
// Returns: volume
//
//////////////////////////////////////////////////////////////////////////////////////////////////

double Cylinder::getVolume()
{
    double volume = 0.0;
    
    volume = (PI * getRadius() * getRadius() * height);
    
    return volume;
}