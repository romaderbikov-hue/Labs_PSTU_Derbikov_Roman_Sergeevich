#include <iostream>
#include <cstdarg>
#include <cmath>
using namespace std;

int kvadrat(int count, ...)
{
    va_list args;
    va_start(args, count);

    int squaresCount = 0;

    for (int i = 0; i < count; i++)
    {
        int num = va_arg(args, int);
        if (num >= 0)
        {
            int root = (int)round(sqrt(num));
            if (root * root == num)
            {
                squaresCount++;
            }
        }
    }

    va_end(args);
    return squaresCount;
}

int main()
{
    cout << "Test 1 (3 params): " << kvadrat(3, 2, 4, 5) << endl;

    cout << "Test 2 (7 params): " << kvadrat(7, 1, 4, 9, 10, 16, 20, 25) << endl;

    cout << "Test 3 (11 params): " << kvadrat(11, 2, 3, 4, 5, 9, 11, 16, 17, 25, 30, 36) << endl;

    return 0;
}