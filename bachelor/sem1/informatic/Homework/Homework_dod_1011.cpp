#include <iostream>
using namespace std;

bool pairs(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a != b) return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "enter pos: ";
    cin >> n;
    cout << (n % 2 == 0 && pairs(n) ? "true" : "false");
}