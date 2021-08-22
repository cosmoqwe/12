#include <iostream>
#include <stdio.h>
using namespace std;

void Counting_Number_of_Letters(const char* arr) {
	char letters[50]{};
	int number_of_letters[50]{}, counter = 1, counter2 = NULL;;
	for (int i = 0; i < arr[i] != '\0'; i++)
		for (int j = 0; i < arr[j] != '\0'; j++) {
			if (arr[i] == letters[j] || arr[i] == ' ') {
				counter = 1;
				break;
			}
			else if (arr[i] == arr[j]) number_of_letters[counter2] = counter++;
			if (arr[j + 1] == '\0') {
				counter = 1;
				letters[counter2] = arr[i];
				counter2++;
			}
		}
	for (int i = 0; i < strlen(letters); i++)
		cout << letters[i] << "--> " << number_of_letters[i] << endl;;
}
void main() {
	setlocale(0, "");
	cout << "¬ведите текст" << endl;
	char arr[50]{};
	gets_s(arr);
	Counting_Number_of_Letters(arr);
}