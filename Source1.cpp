#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
using namespace std;
void main()
{
    setlocale(0, "");
    char str[100], s[100],  k[100], BANKA[100], pos = 0, j=0;
    cout << " Введите строку -->";
    cin.getline(str, 100);
    cout << "Введите слово, которое хотите поменять --> ";
    cin.getline(s, 100);
    cout << "Введите слово,  на которое хотите поменять --> ";
    cin.getline(k, 100);
        for ( int i = 0; str[i]; i++)
        {
            for ( j = 0; str[i + j] && s[j]; j++)
                if (str[i + j] != s[j])
                    break;
            if (!s[j])
            {
                i += j - 1;
                for (j = 0; k[j]; j++)
                    BANKA[pos++] = k[j];
            }
            else
            {
                BANKA[pos++] = str[i];
            }
            BANKA[pos] = NULL;
        }
        strcpy(str, BANKA);
        cout << "После изменения -- > " << str << endl;
}
