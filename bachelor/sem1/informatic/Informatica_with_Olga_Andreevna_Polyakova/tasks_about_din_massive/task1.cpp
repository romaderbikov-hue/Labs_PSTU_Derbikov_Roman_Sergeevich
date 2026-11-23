#include <iostream>
using namespace std;

int main()
{
    int size = 3;
    int* arr = new int[size]{10, 20, 30};
    
    cout << "Massive (3): ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int newSize = 5;
    int* newArr = new int[newSize];

    for (int i = 0; i < newSize; i++)
    {
        if (i < size) newArr[i] = arr[i];
        else newArr[i] = 0;
    }
    
    delete[] arr;
    arr = newArr;
    size = newSize;
    cout << "Massive+ (5): ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int smallSize = 2;
    int* smallArr = new int[smallSize];

    for (int i = 0; i < smallSize; i++)
    {
        smallArr[i] = arr[i];
    }

    delete[] arr;
    arr = smallArr;
    size = smallSize;

    cout << "Massive- (2): ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}