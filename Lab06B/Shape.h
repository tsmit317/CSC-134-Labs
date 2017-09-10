////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Shape.h
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Determines the shape of the object being calculated.
//
// Data-members: string shapeName;
//
// Member-functions:Shape(string shapeName = "No Shape");
//                  ~Shape();
//                  friend ostream &operator << (ostream &output, Shape &s);
//                  string toString();
//                  void setName(string);
//                  double getArea();
//                  double getVolume();
//
///////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>


using namespace std;

class Shape
{
    
private:
    string shapeName;
    
public:
    
    // Constructors/Destructors
    Shape(string shapeName = "No Shape");
    ~Shape();
    
    // overloaded stream Insertion Operator
    friend ostream &operator << (ostream &output, Shape &s);
    
    string toString();
    void setName(string);
    double getArea();
    double getVolume();

};
#endif 
