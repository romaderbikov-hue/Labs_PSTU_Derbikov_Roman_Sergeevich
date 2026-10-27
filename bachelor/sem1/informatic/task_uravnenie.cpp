#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double a1, b1, a2, b2;
    cout << "Enter a1 b1 a2 b2: ";
    cin >> a1 >> b1 >> a2 >> b2;

    double left = max(a1, a2);
    double right = min(b1, b2);

    if (left <= right) 
    {
        cout << " Peresekayutsa ";
        cout << " Dlina : " << right - left << " ";
        
        if (a1 >= a2 && b1 <= b2) cout << " A in B ";

        else if (a2 >= a1 && b2 <= b1) cout << " B in A ";

        else cout << " Chastichnoe ";
    } else 
    {
        cout << " Ne peresekayutsa ";
    }
    return 0;
}