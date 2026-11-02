#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matrix[3][4] =
    {
        {1, 2, 3, 4},
        {10, -5, 8, 0},
        {-1, 2, -3, 4}
    };

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cout << setw(4) << matrix[i][j];
            sum += matrix[i][j];
        }
        cout << " | Summ: " << sum << endl;
    }

    return 0;
}