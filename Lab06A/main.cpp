// Exercise Solution: main.cpp
#include <iostream>


#include "Rational.h" // include definition of class Rational
using namespace std;

int main()
{
    
     //Create a new Scope so that we can view Destructor Message
    {
        Rational c( 2, 6 ), d( 7, 8 ), x; // creates three rational objects
        int data = 10;
        bool val = false;
        
        cin >> c >> d;
        
        cout << c; // prints rational object c
        cout << " + ";
        cout << d; // prints rational object d
        x = c + d; // adds object c and d; sets the value to x
        cout << " = ";
        cout << x << endl; // prints rational object x
        cout << "\n";
        cout << x; // prints rational object x
        cout << " = ";
        cout<< static_cast<double>(x)<<endl; // prints rational object x as
        cout << "\n\n";
        
        //*******************************************************************
        
        cout << c ; // prints rational object c
        cout << " - ";
        cout << d; // prints rational object d
        x = c - d; // subtracts object c and d
        cout << " = ";
        cout << x; // prints rational object x
        cout << "\n";
        cout << x; // prints rational object x
        cout << " = ";
        cout << static_cast<double>(x)<<endl; // prints rational object x as
        
        cout << "\n\n";
        
        //******************************************************************
        
        cout << c; // prints rational object c
        cout << " x ";
        cout << d; // prints rational object d
        x = c * d; // multiplies object c and d
        cout << " = ";
        cout << x; // prints rational object x
        cout << "\n";
        cout << x; // prints rational object x
        cout << " = ";
        
        cout<< static_cast<double>(x)<<endl; // prints rational object x as
        
        
        cout<<c; // prints rational object c
        cout << " x ";
        cout<< data;
        x = c*data; // multiplies object c and integer data
        cout << " = ";
        cout<<x; // prints rational object x
        cout << '\n';
        cout<<x; // prints rational object x
        cout << " = ";
        cout<< static_cast<double>(x)<<endl; // prints rational object x as
        
        cout << "\n\n";
        
        //******************************************************************
        
        cout<<data; // prints data
        cout << " + ";
        cout<< c;
        x = data + c; // add data to object c
        cout << " = ";
        cout<<x; // prints rational object x
        cout << '\n';
        cout<<x; // prints rational object x
        cout << " = ";
        cout<< static_cast<double>(x)<<endl; // prints rational object x as
        
        cout << "\n\n";
        //*********************************************************************
        cout<<c; // prints rational object c
        cout << " / ";
        cout<<d; // prints rational object d
        x = c/d; // divides object c and d
        cout << " = ";
        cout<<x; // prints rational object x
        cout << '\n';
        cout<<x; // prints rational object x
        cout << " = ";
        cout<< static_cast<double>(x)<<endl; // prints rational object x as
        
        cout << "\n\n";
        
        //*********************************************************************
        cout<<c; // prints rational object c
        cout << " == ";
        cout<<d; // prints rational object d
        cout<<" : " ;
        val = (c == d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
        
        
        //*********************************************************************
        cout<<c; // prints rational object c
        cout << " != ";
        cout<<d; // prints rational object d
        cout<<" : " ;
        val = (c != d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
        
        //*********************************************************************
        cout<<c; // prints rational object c
        cout << " > ";
        cout<<d; // prints rational object d
        cout<<" : " ;
        val = (c > d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
        
        //*********************************************************************
        cout<<c; // prints rational object c
        cout << " < ";
        cout<<d; // prints rational object d
        cout<<" : " ;
        val = (c < d);
        cout<< (val == true ? "true" : "false");
        cout << "\n\n";
    
    }
    
    
    return 0;
    
} // end main 



