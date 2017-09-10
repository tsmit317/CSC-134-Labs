////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Lab06Bmain
// Programmer: Taylor Smith
// Date: 04/27/14
//
// Description: Driver file for Lab06B.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include "Point.h"
#include "Shape.h"
#include "Cylinder.h"
#include "Circle.h"

using namespace std;
int main()
{
    cout<<"TRACE CONSTRUCTOR DESTRUCTOR FOR CYLINDER"<<endl;
    {
        Cylinder c1(1,2,5.0,10.0);
        cout << c1 <<"Area is "<< c1.getArea()<<"\nVolume is " <<c1.getVolume()<<endl;
        cout << c1 <<endl;
    }
    cout<<"END OF CONSTRUCTOR DESTRUCTOR FOR CYLINDER"<<endl;
    cout<<"\n\n";
    cout<<"TRACE CONSTRUCTOR DESTRUCTOR FOR CIRCLE"<<endl;
    {
        Circle cir1(4,8,5.0);
        cout << cir1 << "Area is " << cir1.getArea() << "\nVolume is " << cir1.getVolume() <<endl;
    }
    cout<<"END OF CONSTRUCTOR DESTRUCTOR FOR CIRCLE"<<endl;
    cout<<"\n\n";
    
    cout<<"TRACE CONSTRUCTOR DESTRUCTOR FOR POINT"<<endl;
    {
        Point p1(4,9);
        cout << p1 <<endl;
    }
    cout<<"END OF CONSTRUCTOR DESTRUCTOR FOR POINT"<<endl;
    cout<<"\n\n";
    cout<<"TRACE CONSTRUCTOR DESTRUCTOR FOR SHAPE"<<endl;
    {
        Shape sh1;
        cout << sh1 << endl;
    } 
    cout<<"END OF CONSTRUCTOR DESTRUCTOR FOR SHAPE"<<endl; 
    
    
    cin.get();
    return 0; 
}