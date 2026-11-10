#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cout << "enter razmer n*m: ";
    cin >> n >> m;
    bool noDelo = true;
    cout << "enter matrix: ";

    for (int i = 0; i < n; i++)
    {
        bool allDelo = true;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            if (x <= 0) allDelo = false;
        }
        if (allDelo) noDelo = false;
    }

    cout << (noDelo ? "true" : "false");
}