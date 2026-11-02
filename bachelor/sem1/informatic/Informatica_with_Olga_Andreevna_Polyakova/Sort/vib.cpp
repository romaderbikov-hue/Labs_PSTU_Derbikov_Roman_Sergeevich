#include <iostream>
using namespace std;

int main()
{
    int A[7] = {5, 2, 9, 1, 7, 3, 8}; 
    for (int i = 0; i < 6; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (A[j] < A[minIndex]) minIndex = j;
        }
        int y = A[i];
        A[i] = A[minIndex];
        A[minIndex] = y;
    }
    for (int i = 0; i < 7; i++) cout << A[i] << " ";
    return 0;
}