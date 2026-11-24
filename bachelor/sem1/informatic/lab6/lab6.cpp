#include <iostream>
#include <cctype>
using namespace std;

bool isPal(char w[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (w[i] != w[len - 1 - i]) return false;
    }
    return true;
}

int main()
{
    char str[256];
    cout << "Enter text: ";
    cin.getline(str, 256);

    char word[256];
    int idx = 0;
    bool found = false;

    cout << "Palindromes: ";

    for (int i = 0; ; i++)
    {
        if (isalpha(str[i]) || isdigit(str[i]))
        {
            word[idx++] = tolower(str[i]); 
        } 
        else
        {
            if (idx > 0)
            {
                word[idx] = '\0';
                
                if (isPal(word, idx))
                {
                    cout << word << " ";
                    found = true;
                }
                idx = 0; // сброс
            }
            if (str[i] == '\0') break; 
        }
    }

    if (!found) cout << "None";
    cout << endl;

    return 0;
}