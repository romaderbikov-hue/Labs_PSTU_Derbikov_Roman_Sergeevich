#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int A[n] = {1, 2, 3, 4, 5};
    
    bool F = false; 
    int i = 0;

    while (i < n - 1 && !F)
    {
        if (A[i] >= A[i + 1]) F = true; 
        i++;
    }

    if (!F) cout << "Sorted" << endl;
    else cout << "Not sorted" << endl;

    return 0;
}