#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int h1, m1, h2, m2;
    char op;

    cout << "First time (h m): ";  cin >> h1 >> m1;
    cout << "+ or - ? ";       cin >> op;
    cout << "Second time (h m): ";  cin >> h2 >> m2;

    if (h1 > 23 || m1 > 59 || h2 > 23 || m2 > 59) 
    {
        cout << "Error: hours 0-23, minutes 0-59\n";
        return 0;
    }

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t;

    if (op == '+') 
    {
        t = t1 + t2;
    } 
    else 
    {
        t = t1 - t2;
    }

    t = t % 1440;
    if (t < 0) t += 1440;

    cout << "Answer: " << setfill('0')
         << setw(2) << t / 60 << ":"
         << setw(2) << t % 60 << "\n";
}