#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(0, "");
	cout << "Введите текст" << endl;
	char str[50];
	gets_s(str);
	int counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
			counter++;
	}
	cout << "Кол-во цифр в строке " << counter << endl;
}