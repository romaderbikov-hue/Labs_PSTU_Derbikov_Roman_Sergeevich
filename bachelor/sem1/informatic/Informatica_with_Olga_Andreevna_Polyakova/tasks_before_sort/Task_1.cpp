#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int A[n];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < n; i++) cin >> A[i];

    int minVal = A[0], maxVal = A[0];
    int minIdx = 0, maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] < minVal) { minVal = A[i]; minIdx = i; }
        if (A[i] > maxVal) { maxVal = A[i]; maxIdx = i; }
    }

    int countMin = 0, countMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == minVal) countMin++;
        if (A[i] == maxVal) countMax++;
    }

    cout << "Min: " << minVal << " | Idx: " << minIdx << " | Count: " << countMin << endl;
    cout << "Max: " << maxVal << " | Idx: " << maxIdx << " | Count: " << countMax << endl;

    return 0;
}