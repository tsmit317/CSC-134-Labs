////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: rationalMain.cpp
// Programmer: Taylor Smith
// Date: 04/04/14
//
// Description: Program adds, subtracts, divides, multiplies, diplays as double rational numbers.
//              Also, determines if two rational numbers are equal, not equal, less than, and
//              greater than. Additionally, also diplays message everytime destructor is called. 
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    
    { //Create a new Scope so that we can view Destructor Message
        
        
        Rational c( 2, 6 ), d( 7, 8 ), x; // creates three rational objects
        int data = 10;
        bool val = false;
        
        c.printRational(); // prints rational object c
        cout << " + ";
        d.printRational(); // prints rational object d
        x = c.addition( d ); // adds object c and d; sets the value to x
        cout << " = ";
        x.printRational(); // prints rational object x
        cout << '\n';
        x.printRational(); // prints rational object x
        cout << " = ";
        cout<< x.getRationalAsDouble(); // prints rational object x as double
        cout << "\n\n";
        
        //*******************************************************************
        
        c.printRational(); // prints rational object c
        cout << " - ";
        d.printRational(); // prints rational object d
        x = c.subtraction( d ); // subtracts object c and d
        cout << " = ";
        x.printRational(); // prints rational object x
        cout << '\n';
        x.printRational(); // prints rational object x
        cout << " = ";
        cout<< x.getRationalAsDouble(); // prints rational object x as double
        cout << "\n\n";
        
        //******************************************************************
        
        c.printRational(); // prints rational object c
        cout << " x ";
        d.printRational(); // prints rational object d
        x = c.multiplication( d ); // multiplies object c and d
        cout << " = ";
        x.printRational(); // prints rational object x
        cout << '\n';
        x.printRational(); // prints rational object x
        cout << " = ";
        cout<< x.getRationalAsDouble(); // prints rational object x as double
        cout << "\n\n";
        
        //******************************************************************
        
        c.printRational(); // prints rational object c
        cout << " x ";
        cout<< data;
        x = c.multiplication( data ); // multiplies object c and integer data
        cout << " = ";
        x.printRational(); // prints rational object x
        cout << '\n';
        x.printRational(); // prints rational object x
        cout << " = ";
        cout<< x.getRationalAsDouble(); // prints rational object x as double
        cout << "\n\n";
        
        //*********************************************************************
        c.printRational(); // prints rational object c
        cout << " / ";
        d.printRational(); // prints rational object d
        x = c.division( d ); // divides object c and d
        cout << " = ";
        x.printRational(); // prints rational object x
        cout << '\n';
        x.printRational(); // prints rational object x
        cout << " = ";
        cout<< x.getRationalAsDouble(); // prints rational object x as double
        cout << "\n\n";
        
        //*********************************************************************
        c.printRational(); // prints rational object c
        cout << " == ";
        d.printRational(); // prints rational object d
        cout<<" : " ;
        val = c.isEqual(d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
        
        //*********************************************************************
        c.printRational(); // prints rational object c
        cout << " != ";
        d.printRational(); // prints rational object d
        cout<<" : " ;
        val = c.isNotEqual(d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
        
        //********************************************************************* 
        c.printRational(); // prints rational object c 
        cout << " > "; 
        d.printRational(); // prints rational object d 
        cout<<" : " ; 
        val = c.isGreaterThan(d); 
        cout<< (val == true ? "true" : "false"); 
        cout << "\n\n"; 
        
        //********************************************************************* 
        c.printRational(); // prints rational object c 
        cout << " < "; 
        d.printRational(); // prints rational object d 
        cout<<" : " ; 
        val = c.isLessThan(d); 
        cout<< (val == true ? "true" : "false"); 
        cout << "\n\n";
        
    } // End of Scope
    
    cin.get();
    
    return 0; 
} // end main
