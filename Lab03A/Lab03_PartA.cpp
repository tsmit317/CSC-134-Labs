/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Filename: Lab03_PartA.cpp
//  Date: 02/14/14
//  Programmer: Taylor Smith
//
//  Decription:
//          Program asks user for object (sphere, cylinder, and cone), then for the calculation type
//          (volume or surface area), then calculates and displays the information.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip> // for setprecision
#include <cmath> // for sq root/ and squared
#include "Shape.h" // constants


using namespace std;

// function signatures

char inputShape();
void inputDimension(double&);
void inputDimension(double&, double&);
char inputCompType();
void performComputation(char, double);
void perfromComputation(char, char, double, double);
double sphere_volume(double radius);
double sphere_surface_area(double radius);
double cylinder_volume(double radius, double height);
double cylinder_surface_area(double radius, double height);
double cone_volume(double radius, double height);
double cone_surface_area(double radius, double height);

// begin main
int main()
{
    // local variables
    char shape = ' ';
    char compType = ' ';
    double radius = 0.0;
    double height = 0.0;
    
    // sets member-function to shape
    shape = inputShape();
    
    // begin loop using shape
    while (shape != 'Q')
    {
        if(shape == '1') //sphere
        {
            inputDimension(radius); // asks for radius only
            compType = inputCompType(); //calculation type
            performComputation(compType, radius); //selects and calc
            
            shape = inputShape(); // repeat loop
        }
        else if (shape == '2') //cylinder
        {
            inputDimension(radius, height); //asks for radius and height
            compType = inputCompType();//calculation type
            perfromComputation(shape, compType, radius, height); //selects and calc
            
            shape = inputShape();// repeat loop
        }
        else if (shape == '3') //cone
        {
            inputDimension(radius, height);//asks for radius and height
            compType = inputCompType();//calculation type
            perfromComputation(shape, compType, radius, height); //selects and calc
            
            shape = inputShape();// repeat loop
        }
        else
        {
            cout << "Incorrect input, try again." << endl; // error message
            shape = inputShape();// repeat loop
        }
    } // end loop
    
    cout << "Thank you and good bye!" << endl; // message to user
    
    cin.get();
    return 0;
} // end main

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: inputShape()
//
//  Description: Asks for to select shape.
//
//  Returns: shape
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

char inputShape()
{
    char shape = ' ';
    cout << "Select a shape (1) sphere (2) cylinder (3) cone (q) quit: ";
    cin >> shape;
    shape = toupper(shape);
    
    return shape;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: inputDimension(double &radius)
//
//  Description: Overloaded function, asks for and collects radius from user if user selected sphere.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void inputDimension(double &radius)
{
    cout << "Enter radius: ";
    cin >> radius;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: inputDimension(double &radius, double &height)
//
//  Description: Overloaded function, asks for and collects radius and height from user if user selected
//              cylinder or cone.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void inputDimension(double &radius, double &height)
{
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: inputCompType()
//
//  Description: Asks for and collects the type of calculation the user wants.
//
//  Returns: compType
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

char inputCompType()
{
    char compType = ' ';
    cout << "Select a Computation (1) volume (2) surface area: ";
    cin >> compType;
    return compType;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: performComputation(char compType, double radius)
//
//  Description: Overloaded function for sphere, using compType and radius, determines the calculation the
//              user wants then displays the answer set to 3 decimal places.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void performComputation(char compType, double radius)
{
    
    if ( compType == '1')
    {
        cout << "Volume of sphere " << fixed << setprecision(3) << sphere_volume(radius)<< "\n" << endl;
    }
    else if( compType == '2')
    {
        cout << "Surface area of sphere is : " << fixed << setprecision(3) << sphere_surface_area(radius)<< "\n" << endl;
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: performComputation(char shape, char compType, double radius, double height)
//
//  Description: Overloaded function for cylinder and cone, using compType and radius, determines the
//              calculation the user wants then displays the answer set to 3 decimal places.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void perfromComputation(char shape, char compType, double radius, double height)
{
    if(shape == '2' && compType == '1')
    {
        cout << "Volume of cylinder is: " << fixed << setprecision(3) << cylinder_volume(radius, height) << "\n" << endl;
    }
    else if(shape == '2' && compType == '2')
    {
        cout << "Surface area of cylinder is: " << fixed << setprecision(3) << cylinder_surface_area(radius, height)<< "\n" << endl;
    }
    else if(shape == '3' && compType == '1')
    {
        cout << "Volume of cone is: " << fixed << setprecision(3) << cone_volume(radius, height)<< "\n" << endl;
    }
    else if(shape == '3' && compType == '2')
    {
        cout << "Surface area of cone is: " << fixed << setprecision(3) << cone_surface_area(radius, height) << "\n" << endl;
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: sphere_volume(double radius)
//
//  Description: Using radius, calculates the volume of a sphere.
//
//  Return: sphere_volume.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double sphere_volume(double radius)
{
    // made sure to set 3 and 4 to .0 so it would compute as a double
    double sphere_volume = ((4.0/3.0)*(PI)*pow(radius, 3));
    
    return sphere_volume;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: sphere_surface_area(double radius)
//
//  Description: Using radius, calculates the surface area of a sphere.
//
//  Return: sphere_surface_area.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double sphere_surface_area(double radius)
{
    double sphere_surface_area = ((4.0)*(PI)*(pow(radius, 2)));
    
    return sphere_surface_area;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: cylinder_volume(double radius, double height)
//
//  Description: Usesradius and height to calculate the volume of a cylinder.
//
//  Return: cylinder_volume.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double cylinder_volume(double radius, double height)
{
    double cylinder_volume = ((PI)*(pow(radius, 2))*(height));
    
    return cylinder_volume;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: cylinder_surface_area(double radius, double height)
//
//  Description: Usesradius and height to calculate the surface area of a cylinder.
//
//  Return: cylinder_surface_area.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double cylinder_surface_area(double radius, double height)
{
    double cylinder_surface_area = ( ((2.0)*(PI)*(pow(radius, 2))) + ((2.0)*(PI)*(radius)*(height)));
    
    return cylinder_surface_area;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: cone_volume(double radius, double height)
//
//  Description: Uses radius and height to calculate the volume of a cone.
//
//  Return: cone_volume.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double cone_volume(double radius, double height)
{
    double cone_volume = ((1.0/3.0)*(PI)*(pow(radius, 2))*(height));
    
    return cone_volume;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function: cone_surface_area(double radius, double height)
//
//  Description: Uses radius and height to calculate the surface area of a cone.
//
//  Return: cone_surface_area.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

double cone_surface_area(double radius, double height)
{
    double cone_surface_area = ( ((PI)*(pow(radius, 2))) + ((PI)*(radius)* (sqrt( (pow(radius, 2)) + (pow(height, 2)) ))));
    
    return cone_surface_area;
}
