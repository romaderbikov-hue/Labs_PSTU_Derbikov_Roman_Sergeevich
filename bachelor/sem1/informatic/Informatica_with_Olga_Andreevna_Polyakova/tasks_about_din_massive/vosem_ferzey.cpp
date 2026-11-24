#include <iostream>
#include <cmath>
using namespace std;

int board[8];

bool isSafe(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
        {
            return false;
        }
    }
    return true;
}

bool solve(int row)
{
    if (row == 8) return true;
    for (int col = 0; col < 8; col++)
    {
        if (isSafe(row, col))
        {
            board[row] = col;
            if (solve(row + 1)) return true;
        }
    }
    return false;
}

int main()
{
    if (solve(0))
    {
        for (int r = 0; r < 8; r++)
        {
            for (int c = 0; c < 8; c++)
            {
                cout << (board[r] == c ? "Q" : ".");
            }
            cout << "\n";
        }
    }
    return 0;
}