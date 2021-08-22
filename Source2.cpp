#include <iostream>
#include <stdio.h>
using namespace std;
char* tp(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (i == 0) 
			str[i] = str[i] - 32;
		else if (str[i] == '.')
			str[i+1 ] = (char)str[i+1 ] - 32;
		else if (str[i] == '!')
			str[i+1 ] = (char)str[i+1 ] - 32;
		else if (str[i] == '?')
			str[i +1] = (char)str[i+1] - 32;
	}
	return str;
}
void main() 
{
	setlocale(0, "");
	cout << "¬ведите текст" << endl;
	char str[50];
	gets_s(str);
	cout << tp(str);

}
