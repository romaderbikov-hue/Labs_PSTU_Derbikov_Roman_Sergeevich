#include <iostream>
using namespace std;

int main()
{
    int A[7] = {5, 2, 9, 1, 7, 3, 8}; 
    for (int i = 1; i < 7; i++)
    {
        int y = A[i];
        int j = i - 1;
        bool F = false;
        while (j >= 0 && !F)
        {
            if (A[j] > y)
            {
                A[j + 1] = A[j];
                j--;
            } else
            {
                F = true;
            }
        }
        A[j + 1] = y;
    }
    for (int i = 0; i < 7; i++) cout << A[i] << " ";
    return 0;
}