//3) Оголосити, проініціалізувати початковими значеннями та вивести одновимірний масив з 7 елементів типу long.Визначити суму парних елементів масиву

#include <iostream>
using namespace std;

int main()
{
	long numbers[7];

	srand(time(NULL));
	for (int i = 0; i < 7; i++)
	{
		numbers[i] = -14 + rand() % 50;

	}

	cout << "Array numbers : " << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << numbers[i] << "  " << endl;

	}

	long sum = 0;
	for (int i = 0; i < 7; ++i)

	{
		if ((i % 2) == 0)
			sum += numbers[i];

	}
	cout << "The sum of even elements of the array = " << sum << endl;

	return 0;
}