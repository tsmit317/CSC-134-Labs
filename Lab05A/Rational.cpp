////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Rational.cpp
// Programmer: Taylor Smith
// Date: 04/04/14
//
// Description: Contains member-function definitions for class Rational.
//
///////////////////////////////////////////////////////////////////////////////////////////////////


#include "Rational.h"
using namespace std;



// Two parameter constructor. Initializes two variables. Sets denominator equal to one if zero.

Rational::Rational(int num, int denom)
{
    numerator = num;
    
    if(denom == 0)
    {
        denominator = 1;
    }
    else
    {
        denominator = denom;
    }
}

//Destructor for constructor Rational. Displays message when executed.

Rational::~Rational()
{
    cout << "\n" << "The Destructor for " << numerator << "/" << denominator << " has been called" << endl;
}


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: void printRational()
//
// Description: Uses member-function reduction(), then displays the rational number.
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Rational::printRational()
{
    reduction();
    
    cout << numerator << "/" << denominator;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: void reduction()
//
// Description: Reduces the rational number if possible.
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Rational::reduction()
{
    int largest;
    largest = numerator > denominator ? numerator : denominator;
    
    int gcd = 0; // greatest common divisor
    
    for ( int loop = 2; loop <= largest; loop++ )
        
        if ( numerator % loop == 0 && denominator % loop == 0 )
            gcd = loop;
    
    if (gcd != 0)
    {
        numerator /= gcd;
        denominator /= gcd;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: double getRationalAsDouble()
//
// Description: Uses static cast to turn both int numerator and denominator into double, then
//              divides the numerator by the denominator.
//
// Returns: dRat
//
///////////////////////////////////////////////////////////////////////////////////////////////

double Rational::getRationalAsDouble()
{
    double dRat = 0.0;
    
    dRat = static_cast<double>(numerator)/static_cast<double>(denominator);
    
    return dRat;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: Rational addition(const Rational &a)
//
// Description: Adds two rational numbers. Creates a new object of constructor Rational
//              to hold the final product. Uses the object of the first rational
//              number accessed through the dot operator in main, then uses a reference operator
//              to access numerator and denominator of the second rational number. Finally uses
//              member-function reduction() on new object.
//
// Returns: plus
//
///////////////////////////////////////////////////////////////////////////////////////////////

Rational Rational::addition(const Rational &a)
{
    Rational plus;
    
    plus.numerator = ((a.numerator * denominator) + (numerator * a.denominator));
    plus.denominator = (a.denominator * denominator);
    plus.reduction();
    
    return plus;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: Rational subtraction(const Rational &s)
//
// Description: Subtracts two rational numbers. Creates a new object of constructor Rational
//              to hold the final product. Uses the object of the first rational
//              number accessed through the dot operator in main, then uses a reference operator
//              to access numerator and denominator of the second rational number. Finally uses
//              member-function reduction() on new object.
//
// Returns: minus
//
///////////////////////////////////////////////////////////////////////////////////////////////

Rational Rational::subtraction(const Rational &s)
{
    Rational minus;
    
    minus.numerator = ((s.denominator * numerator) - (denominator * s.numerator));
    minus.denominator = (s.denominator * denominator);
    minus.reduction();
    
    return minus;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: Rational division(const Rational &d)
//
// Description: Divides two rational numbers. Creates a new object of constructor Rational
//              to hold the final product. Uses the object of the first rational
//              number accessed through the dot operator in main, then uses a reference operator
//              to access numerator and denominator of the second rational number. Finally uses
//              member-function reduction() on new object.
//
// Returns: div
//
///////////////////////////////////////////////////////////////////////////////////////////////

Rational Rational::division(const Rational &d)
{
    Rational div;
    
    div.numerator = (d.denominator * numerator);
    div.denominator = (d.numerator * denominator);
    div.reduction();
    
    return div;
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: Rational multiplication(const Rational &m)
//
// Description: Multiplies two rational numbers. Creates a new object of constructor Rational
//              to hold the final product. Uses the object of the first rational
//              number accessed through the dot operator in main, then uses a reference operator
//              to access numerator and denominator of the second rational number. Finally uses
//              member-function reduction() on new object.
//
// Returns: mult
//
///////////////////////////////////////////////////////////////////////////////////////////////

Rational Rational::multiplication(const Rational &m)
{
    Rational mult;
    
    mult.numerator = (m.numerator * numerator);
    mult.denominator = (m.denominator * denominator);
    mult.reduction();
    
    return mult;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: Rational multiplication(const int number)
//
// Description: Multiplies rational number by an integer value. Creates a new object of constructor Rational
//              to hold the final product. Uses the object of the first rational number accessed through
//              the dot operator in main, then collects integer value from main. Finally uses member-
//              function reduction() on new object.
//
// Returns: integer
//
///////////////////////////////////////////////////////////////////////////////////////////////


Rational Rational::multiplication(const int number)
{
    Rational integer;
    
    integer.numerator = (numerator * number);
    integer.denominator = denominator;
    integer.reduction();
    
    return integer;
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: bool isEqual(const Rational &ie)
//
// Description: Determines if two rational numbers are equal. Creates two double temp holders to
//              store the double value of both numbers. Then uses if statement to determine if
//              equal.
//
// Returns: true/false
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool Rational::isEqual(const Rational &ie)
{
    double temp = 0.0;
    double secondtemp = 0.0;
    
    temp = static_cast<double>(numerator)/static_cast<double>(denominator);
    secondtemp = static_cast<double>(ie.numerator)/static_cast<double>(ie.denominator);
    
    if(temp == secondtemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: bool isNotEqual(const Rational &ne)
//
// Description: Determines if two rational numbers are not equal. Creates two double temp holders to
//              store the double value of both numbers. Then uses if statement to determine if
//              not equal. Same as isEqual function, just switched the true/false.
//
// Returns: true/false
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool Rational::isNotEqual(const Rational &ne)
{
    double temp = 0.0;
    double secondtemp = 0.0;
    
    temp = static_cast<double>(numerator)/static_cast<double>(denominator);
    secondtemp = static_cast<double>(ne.numerator)/static_cast<double>(ne.denominator);
    
    if(temp == secondtemp)
    {
        return false;
    }
    else
    {
        return true;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: bool isGreaterThan(const Rational &gt)
//
// Description: Determines if rational number is greater than second. Creates two double temp holders to
//              store the double value of both numbers. Then uses if statement to determine if
//              first is larger than the second.
//
// Returns: true/false
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool Rational::isGreaterThan(const Rational &gt)
{
    double temp = 0.0;
    double secondtemp = 0.0;
    
    temp = static_cast<double>(numerator)/static_cast<double>(denominator);
    secondtemp = static_cast<double>(gt.numerator)/static_cast<double>(gt.denominator);
    
    if(temp > secondtemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function: bool isLessThan(const Rational &lt)
//
// Description: Determines if rational number is less than second. Creates two double temp holders to
//              store the double value of both numbers. Then uses if statement to determine if
//              if first number is less than the second.
//
// Returns: true/false
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool Rational::isLessThan(const Rational &lt)
{
    double temp = 0.0;
    double secondtemp = 0.0;
    
    temp = static_cast<double>(numerator)/static_cast<double>(denominator);
    secondtemp = static_cast<double>(lt.numerator)/static_cast<double>(lt.denominator);
    
    if(temp < secondtemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}