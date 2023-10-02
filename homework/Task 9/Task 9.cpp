//9) Дано одновимірний масив.Поміняти місцями перший елемент з другим, третій з четвертим, і т.д.Вивести змінений масив на екран.

#include <iostream>
using namespace std;

int main()
{
	int arr[6]{ 1,2, 3, 4, 5, 6 };
	int i{ 0 };
	int temp;

	cout << "Original array: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';

	}
	cout << endl;

	for (int i = 0; i < 6; i += 2)
	{
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}

	cout << "New array after swapping: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}