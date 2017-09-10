////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Circle.cpp
// Programmer: Taylor Smith
// Date: 04/11/14
//
// Description: Contains member-function definitions for class Circle.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "Circle.h"


using namespace std;


// Constructor

Circle::Circle(Rational rad, int xCr, int yCr)
{
    radius.numerator = rad.numerator;
    radius.denominator = rad.denominator;
    
    
    xCoor = xCr;
    yCoor = yCr;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: void display()
//
// Description: Displays the x and y coordinates for the center of the circle, as well as
//              the radius in terms of numerator and denominator.
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Circle::display()
{
    cout << "Circle is located at (" << xCoor << "," << yCoor << ") and radius is [ N = " << radius.numerator << " | D = " << radius.denominator << "]" << endl;
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: double getArea()
//
// Description: Calculates the area of the circle by multiplying PI by the radius squared.
//
// Returns: area
//
///////////////////////////////////////////////////////////////////////////////////////////////

double Circle::getArea()
{
    double rad = 0.0;
    double area = 0.0;
    
    rad = static_cast<double>(radius.numerator)/static_cast<double>(radius.denominator);
    
    area = PI * pow(rad, 2);
    
    
    return area;
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: double getCircumfrence()
//
// Description: Calculates the circumference of the circle by multiplying PI by 2 and the radius.
//
// Returns: circumference
//
///////////////////////////////////////////////////////////////////////////////////////////////

double Circle::getCircumference()
{
    double circumference = 0.0;
    double rad = 0.0;
    
    
    rad = static_cast<double>(radius.numerator)/static_cast<double>(radius.denominator);
    circumference = (2 * PI * rad);
    
    return circumference;
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: double getDistance()
//
// Description: Calculates the distance between the centers of two circles.
//
// Returns: dist
//
///////////////////////////////////////////////////////////////////////////////////////////////

double Circle::getDistance(const Circle &d)
{
    double dist = 0.0;
    
    dist = sqrt( pow((d.xCoor - xCoor), 2) + pow((d.yCoor - yCoor), 2));
    
    return dist;
}