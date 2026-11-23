#include <iostream>
using namespace std;

int main()
{
    const int rows = 3, cols = 4;
    int matrix[rows][cols] =
    {
        {1, 2, 3, 4},
        {10, -5, 15, 0},
        {-1, 2, -3, 4}
    };

    int maxVal = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Max: " << maxVal << " | Row: " << maxRow << " | Col: " << maxCol << endl;

    return 0;
}