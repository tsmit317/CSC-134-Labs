

#ifndef _Rational
#define _Rational

#include <iostream>

using namespace std;

class Rational
{
private:
    
    int *numerator;
    int *denominator;
    
public:
    
    friend ostream &operator<<(ostream &output, Rational &a);
    friend istream &operator>>(istream &input, Rational &a);
    

    Rational(int numerator = 0, int denominator = 1);
    Rational(const Rational&);
    
    ~Rational();
    
    Rational & operator=(const Rational &);
    operator double();
    Rational operator+(const Rational &);
    Rational operator-(const Rational &);
    Rational operator/(const Rational &);
    Rational operator*(const Rational &);
    Rational operator*(const int number);
    
    bool operator == (const Rational &);
    bool operator!=(const Rational &);
    bool operator>(const Rational &);
    bool operator<(const Rational &);
    
    void reduction();
    
};

#endif