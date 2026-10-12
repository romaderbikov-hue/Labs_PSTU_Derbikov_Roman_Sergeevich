#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 0;
    double toc = 0.0001;
    double factorial = 1;
    double factorial_2n = 1;
    double n = 1;
    double otv = 1;

    while (abs(otv) >= toc)
    {
        factorial *= n;
        factorial_2n *= (2 * n) * (2 * n - 1);

        otv = factorial / factorial_2n;

        if (otv < toc)
        {
            break;
        }

        sum += otv;
        n++;
    }
    cout << sum << endl;
    return 0;
}