//7) Дано одновимірний масив.Знайти суму елементів з непарними індексами.

#include <iostream>
using namespace std;

int main()
{
	int numbers[4];
	int i = 0;

	srand(time(NULL));
	for (i = 0; i < 4; i++)
	{
		numbers[i] = -14 + rand() % 50;

	}

	cout << "Array numbers : " << endl;

	for (i = 0; i < 4; i++)
	{
		cout << numbers[i] << endl;

	}

	int sum = 0;

	for (int i = 0; i < 4; ++i)

	{ if (i%2 != 0)
		sum += numbers[i];

	}
	cout << "Sum = " << sum << endl;

	return 0;

}