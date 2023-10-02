//4) Утворити одновимірний масив розміром 30. Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, ...).
//Вивести елементи масиву на екран у прямому і оберненому порядку.

#include <iostream>
using namespace std;

int main()
{
	long numbers[30];
	int a = 2;
	int n = 0;

	for (int i = 0; i < 30; i++)
	{
		numbers[i] = pow(a, n);
		n++;
	}

	cout << "Array numbers : " << endl;

	for (int i = 0; i < 30; i++)
	{
		cout << numbers[i] << "  " << endl;

	}

	cout << endl;

	int j = 0; 
	int t = 0;

	for (int i = 0; i < 30; i++)
		for (j = i; j >= 0; j--)
			if (numbers[j] < numbers[j + 1])
			{
				t = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = t;
			}

	cout << "Converse array numbers : " << endl;

	for (int i = 0; i < 30; i++)
	{
		cout << numbers[i] << "  " << endl;

	}

	return 0;
}