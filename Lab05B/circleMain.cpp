////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: circleMain.cpp
// Programmer: Taylor Smith
// Date: 04/11/14
//
// Description: Contains driver program included in lab 5 pdf for testing class Circle. Instantiates
//              several Rational and Circle objects and executes all the member functions of the Circle
//              class.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>


#include "Rational.h" // include definition of class Rational
#include "Circle.h" // include definition of class Circle

int main()
{
    
    cout<<"The number of Rational Objects created now is "<<
    Rational::getCount()<<endl;
    
    Rational c( 2, 6 ), d( 7, 8 ), copy; // creates three rational objects
    
    copy.assignment(d); // Assign the value in d to copy
    Circle circle1(c,-1,-2) , circle2(copy,-3,5);
    
    copy = d; // Assign the value in d to copy
   
    circle1.display();
    cout << "The area of circle 1 is " << circle1.getArea() << endl;
    cout << "The circumference of circle 1 is " << circle1.getCircumference() << endl;
    cout << "\n\n";
    circle2.display();
    cout << "The area of circle 2 is " << circle2.getArea() << endl;
    cout << "The circumference of circle 2 is " << circle2.getCircumference() << endl;
    cout << "\n\n";
    
    cout << "The distance between these two circles is "<< circle1.getDistance(circle2) << endl;
    cout << "The number of Rational Objects created now is " << d.getCount() << endl;
    
    
    cin.get();
    return 0; 
} // end main 
