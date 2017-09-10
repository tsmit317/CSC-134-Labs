

#include "Rational.h"
ostream &operator<<(ostream &output, Rational &o)
{
    output << *o.numerator << "/" << *o.denominator;
    
    return output;
}

istream &operator>>(istream &input, Rational &a)
{
    input >> *a.numerator >> *a.denominator;
    
    return input;
    
}



Rational::Rational(int num, int denom)
: numerator(new int), denominator(new int)

{
    
    numerator = &num;
    
    
    if(denom == 0)
    {
        
        denominator=(new int(1));
    }
    else
    {
        denominator = &denom;
    }
    
    reduction();
}

Rational::~Rational()
{
    cout << " \nThe Destructor for ";
    cout << *this;
    cout << " has been called" << endl;
    
    if(numerator != NULL) delete numerator;
    if(denominator != NULL) delete denominator;
}


void Rational::reduction()
{
    int largest;
    int n = *numerator;
    int d = *denominator;
    
    largest = n > d ? n : d;
    
    int gcd = 0; // greatest common divisor
    
    for ( int loop = 2; loop <= largest; loop++ )
        
        if ( n % loop == 0 && d % loop == 0 )
            gcd = loop;
    
    if (gcd != 0)
    {
        n /= gcd;
        d /= gcd;
    }
    
    numerator = &n;
    denominator = &d;
}

Rational::Rational(const Rational &r)
{
    numerator = r.numerator;
    denominator = r.denominator;
    
}

Rational &Rational::operator=(const Rational &r)
{
    numerator = r.numerator;
    denominator = r.denominator;
    
    return *this;
    
}

Rational::operator double()
{
    return (static_cast<double>(*numerator)/static_cast<double>(*denominator));
    
}

Rational Rational::operator+(const Rational &a)
{
    
    
    return Rational(*numerator * *a.denominator + *denominator * *a.denominator,
                    *denominator * *a.denominator);
}

Rational Rational::operator-(const Rational &s)
{
    return Rational(*numerator * *s.denominator - *denominator * *s.denominator,
                    *denominator * *s.denominator);
}

Rational Rational::operator/(const Rational &d)
{
    return Rational(*numerator * *d.denominator, *denominator * *d.numerator);
}

Rational Rational::operator*(const Rational &m)
{
    return Rational(*numerator * *m.numerator, *denominator * *m.denominator);
}
Rational Rational::operator*(const int number)
{
    return Rational(*numerator * number, *denominator);
}

bool Rational::operator == (const Rational &e)
{
    bool rational = false;
   
    if(numerator == e.numerator && denominator == e.denominator)
    {
        rational = true;
    }
    return rational;
}

bool Rational::operator!=(const Rational &ne)
{
    bool rational = true;
    
    if(numerator == ne.numerator && denominator == ne.denominator)
    {
        rational = false;
    }
    return rational;

}

bool Rational::operator>(const Rational &gt)
{
    bool rational = false;
    
    double r1 = (static_cast<double>(*numerator)/static_cast<double>(*denominator));
    double r2 = (static_cast<double>(*gt.numerator)/static_cast<double>(*gt.denominator));
   
    if(r1 > r2)
    {
        rational = true;
    }
    return rational;
}

bool Rational::operator<(const Rational &lt)
{
    bool rational = false;
    
    double r1 = (static_cast<double>(*numerator)/static_cast<double>(*denominator));
    double r2 = (static_cast<double>(*lt.numerator)/static_cast<double>(*lt.denominator));
    
    if(r1 < r2)
    {
        rational = true;
    }
    return rational;
}