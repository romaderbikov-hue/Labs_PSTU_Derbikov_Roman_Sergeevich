#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a = 0.1;
    double  b = 1.0;
    double step = (b - a) / 10;
    int n = 20;
    double eps = 0.0001;

    for (double x = a; x <= b + 0.0001; x += step) 
    {
        double SumA = 1, SumB = 1, a1 = 1, b1 = 1;

        for (int k = 1; k <= n; k++) 
        {
            a1 = a1 * cos(k * x) / (k * cos((k - 1) * x));
            SumA += a1;
        }

        for (int k = 1; fabs(b1) >= eps; k++) 
        {
            b1 = b1 * cos(k * x) / (k * cos((k - 1) * x));
            SumB += b1;
        }

        cout << "X=" << x << " SumA=" << SumA << " SumB=" << SumB << " Y=" << exp(cos(x)) * cos(sin(x)) << endl;
    }

    return 0;
}