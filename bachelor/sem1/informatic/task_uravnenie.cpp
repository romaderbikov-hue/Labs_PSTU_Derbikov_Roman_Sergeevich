#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, x, y;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter x: ";
    cin >> x;

    if (x < 0)
    {
        y = a * pow(x, 2) + b; 
    } 
    else if (x <= 10) 
    {
        y = (a + b) * x;
    } 
    else 
    {
        y = x / (pow(a, 2) + pow(b, 2) + 1);
    }

    cout << "Answer: y = " << y << endl;

    return 0;
}