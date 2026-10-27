#include <iostream>
using namespace std;

int main()
{
    int head{1}, position{0}; // Стартовые состояние башки и позиция, при head = 0 тормозится алгоритм
    char arr[] = {' ', '1', '1', '+', '1', '1', ' ', '\0'}; // Лента
    char alp[] = {' ', '1', '+'}; // Алфавит

    while (head) 
    {
        if (head == 1)
        {
            if (arr[position] == alp[2]) // Если нашли плюс
            {
                arr[position] = alp[1];  // Меняем на 1
                head = 2;
                position += 1;
            }
            else
            {
                position += 1; // Иначе просто идем вправо
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[0]) // Если нашли пробел в конце
            {
                arr[position] = alp[1];  // Ставим 1
                position -= 1;
                head = 3;
            }
            else
            {
                arr[position] = alp[0];  // Иначе стираем (меняем на пробел)
                position += 1;
            }
        }
        else if (head == 3)
        {
            head = 0; // СТОП
        }
    }
    
    // ИСПРАВЛЕННЫЙ ВЫВОД:
    cout << "2. ";
    for (int i = 0; arr[i] != '\0'; i++) {
        // Выводим только единицы (игнорируем пробелы)
        if (arr[i] == '1') {
            cout << arr[i];
        }
    }
    cout << "\n";
    
    return 0;
}