#include <iostream>
using namespace std;

struct Fraction
{
    int num;
    int den;
};

double subtract(double a, double b)
{
    return a - b;
}

Fraction subtract(Fraction a, Fraction b)
{
    Fraction res;
    res.num = a.num * b.den - b.num * a.den;
    res.den = a.den * b.den;
    return res;
}

int main()
{
    double d1 = 5.75, d2 = 2.25;
    cout << "Decimal: " << d1 << " - " << d2 << " = " << subtract(d1, d2) << endl;

    Fraction f1 = {3, 4};
    Fraction f2 = {1, 2};
    
    Fraction f3 = subtract(f1, f2);
    
    cout << "Ordinary: " << f1.num << "/" << f1.den 
         << " - " << f2.num << "/" << f2.den 
         << " = " << f3.num << "/" << f3.den << endl;

    return 0;
}