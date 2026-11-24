#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux)
{
    if (n == 0) return;
    if (n == 1)
    {
        cout << "Move disk 1: " << from << " -> " << to << "\n";
        return;
    }
    
    hanoi(n - 1, from, aux, to);
    
    cout << "Move disk " << n << ": " << from << " -> " << to << "\n";
    
    hanoi(n - 1, aux, to, from);
}

int main()
{
    int n = 5;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}