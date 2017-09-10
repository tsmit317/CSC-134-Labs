////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Rational.h
// Programmer: Taylor Smith
// Date: 04/04/14
//
// Description: Presents the public interface for class Rational. Member-functions defined in
//              Rational.cpp. Included guards in this header file.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

using namespace std;

class Rational
{
    
private:
    int numerator;
    int denominator;
    
public:
    Rational(int numerator = 0, int denominator = 1);
    
    ~Rational();
    
    void printRational();
    double getRationalAsDouble();
    
    Rational addition(const Rational &);
    Rational subtraction(const Rational&);
    Rational division(const Rational&);
    Rational multiplication(const Rational&);
    Rational multiplication(const int number);
    
    bool isEqual(const Rational&);
    bool isNotEqual(const Rational&);
    bool isGreaterThan(const Rational&);
    bool isLessThan(const Rational&);
    
    void reduction();
    
};



#endif
