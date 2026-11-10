#include <iostream>
#include <vector>
using namespace std;

void shellSort(vector<int>& a)
{
    int n = a.size();
    for (int gap = n / 2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++)
        {
            int temp = a[i], j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
                a[j] = a[j - gap];
            a[j] = temp;
        }
}

int main() {
    vector<int> a = {8, 3, 7, 1, 9, 2, 5, 4};
    shellSort(a);
    for (int x : a) cout << x << " ";
}