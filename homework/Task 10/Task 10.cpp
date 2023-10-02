//10) Дано масив А.Скопіювати елементи масиву А у масив В.

#include <iostream>
using namespace std;

int main()
{
	int arrA[5] = { 1, 2, 3, 4, 5 };
	int arrB[5] = {};

	cout << "Array A: ";
	for (int i = 0; i < 5; i++)
		cout << arrA[i] << ' ';
	cout << endl;

	cout << "Array B: " << endl;

	for (int i = 0; i < 5; i++)
		arrB[i] = arrA[i];

	cout << "New array B: ";
	for (int i = 0; i < 5; i++)
		cout << arrB[i] << ' ';
	cout << endl;

	return 0;
}

