#include <iostream>
using namespace std;

int first_tab()
{
    // ВАЖНО: position = 1, чтобы начать с первой цифры '1', а не с пробела
    int head{1}, position{1}; 
    
    // Лента: индекс 0 - пробел, 1 - '1', 2 - '0', 3 - '1', 4 - '1', 5 - пробел
    char arr[] = {' ', '1', '0', '1', '1', ' ', '\0'}; 
    
    // Алфавит
    char alp[] = {'0', '1', ' '}; 

    while (head != 0) 
    {
        if (head == 1)
        {
            // Если читаем '0' -> меняем на '1'
            if (arr[position] == alp[0])
            {
                arr[position] = alp[1]; 
                position += 1;
            }
            // Если читаем '1' -> меняем на '0'
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[0]; 
                position += 1;
            }
            // Если наткнулись на пробел (конец строки) -> СТОП
            else if (arr[position] == alp[2])
            {
                head = 0; 
            }
        }
    };
    
    cout << "Task 1. Ans: \n" << arr << endl;
    return 0;
};

int main()
{
    first_tab();
}