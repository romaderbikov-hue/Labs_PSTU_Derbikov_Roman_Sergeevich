#include <iostream>
#include <iomanip>
using namespace std;

const int COLS = 5; 

bool hasNegative(int row[], int cols)
{
    for (int j = 0; j < cols; j++)
    {
        if (row[j] < 0) return true;
    }
    return false;
}

void processMatrix(int mat[][COLS], int rows)
{
    int validRows = 0; 

    for (int i = 0; i < rows; i++)
    {
        if (!hasNegative(mat[i], COLS))
        {
            if (i != validRows) {
                for (int j = 0; j < COLS; j++)
                {
                    mat[validRows][j] = mat[i][j];
                }
            }
            validRows++;
        }
    }

    for (int i = validRows; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            mat[i][j] = 0;
        }
    }
}

void printMatrix(int mat[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << setw(5) << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter rows count (max 10): ";
    cin >> rows;

    int matrix[10][COLS];
    cout << "Enter matrix elements (" << rows << "x" << COLS << "):\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal matrix:\n";
    printMatrix(matrix, rows);

    processMatrix(matrix, rows);

    cout << "\nMatrix after processing:\n";
    printMatrix(matrix, rows);

    return 0;
}