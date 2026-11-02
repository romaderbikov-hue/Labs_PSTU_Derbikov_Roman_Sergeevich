#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[100];
    int n;

    cout << "Enter size: ";
    cin >> n;
    cout << "Initial: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 5; i++) 
        a[i] = a[i + 5];
    n -= 5;

    cout << "After delete 5: ";
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        a[n] = rand() % 100;
        n++;
    }

    cout << "After add 3: ";
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;

    return 0;
}