#include <iostream>
using namespace std;

int main()
{
    int A[7] = {5, 2, 9, 1, 7, 3, 8}; 
    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            if (A[j - 1] > A[j])
            {
                int y = A[j - 1];
                A[j - 1] = A[j];
                A[j] = y;
            }
        }
    }
    for (int i = 0; i < 7; i++) cout << A[i] << " ";
    return 0;
}
