//5) Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями.

#include <iostream>
using namespace std;

int main()
{
	int numbers[7];
	int i = 0;

	srand(time(NULL));
	for (i = 0; i < 7; i++)
	{
		numbers[i] = -14 + rand() % 50;

	}

	cout << "Array numbers : " << endl;

	for (i = 0; i < 7; i++)
	{
		cout << numbers[i] << "  " << endl;

	}

	for (i = 0; i < 7; i++)
	{
		if (numbers[i] < 0)
		{
			numbers[i] = -numbers[i];
		}
	}

	cout << "Array after the changes: " << endl;
	for (i = 0; i < 7; i++)
	{
		cout << numbers[i] << endl;
	}
	
	return 0;
}