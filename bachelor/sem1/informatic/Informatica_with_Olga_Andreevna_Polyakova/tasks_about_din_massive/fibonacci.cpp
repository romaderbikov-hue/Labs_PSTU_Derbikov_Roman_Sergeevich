#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many Fibonacci numbers to output: ";
    cin >> n;

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
    return 0;
}