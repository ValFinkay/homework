//6) Дано одновимірний масив.Знайти найбільший та найменший елементи масиву та поміняти їх у масиві місцями.

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
		cout << numbers[i] << endl;

	}

	int max = 0;
	int save_max = 0;
	
	max = numbers[0];

	for (i = 1; i < 7; i++)
		if (max < numbers[i])
		{
			max = numbers[i]; 
			save_max = i; 
		}

	cout << "Maximum value = " << max << endl;


	int mіnim = 0;
	int save_mіnim = 0;

	mіnim = numbers[0];

	for (i = 1; i < 7; i++)
		if (mіnim > numbers[i])
		{
			mіnim = numbers[i];
			save_mіnim = i;
		}

	cout << "Minimum value = " << mіnim << endl;

	swap(numbers[save_mіnim], numbers[save_max]);

	cout << "Array numbers : " << endl;

	for (i = 0; i < 7; i++)
	{
		
		cout << numbers[i] << endl;

	}

	return 0;

}