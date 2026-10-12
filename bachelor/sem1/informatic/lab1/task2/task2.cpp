#include <iostream>
using namespace std;

int main() 
{
    int m;
    int n;
    int ans1;
    int ans2;
    int ans3;

    m = 5;
    n = 10;

    ans1 = n-- - m;
    ans2 = m-- < n;
    ans3 = n++ > m;

    cout << ans1 << endl; cout << ans2 << endl; cout << ans3 << endl;

    return 0;
}