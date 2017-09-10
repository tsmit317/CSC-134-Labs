////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Point.h
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Determines the points(x and y coordinates) of the object.
//
// Data-members: const double PI = 3.14159; (protected)
//               int xCoor; (private)
//               int yCoor; (private)
//
// Member-functions:Point(int xCoor = 0, int yCoor = 0);
//                  ~Point();
//                  friend ostream &operator << (ostream &output, Point &p);
//                  int getXCoor();
//                  int getYCoor();;
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
protected:
    const double PI = 3.14159;
    
private:
    int xCoor;
    int yCoor;
    
public:
    // Constructors/Destructors
    Point(int xCoor = 0, int yCoor = 0);
    ~Point();
    
    // overloaded stream Insertion Operator
    friend ostream &operator << (ostream &output, Point &p);

    int getXCoor();
    int getYCoor();
    
};
#endif 
