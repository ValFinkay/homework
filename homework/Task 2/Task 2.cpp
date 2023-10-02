//2) Оголосити одновимірний масив з 7 елементів типу int.Заповнити його випадковими значеннями в діапазоні[-12.. + 50] та вивести на екран.
// Підрахувати кількість відємних та додатніх елементів масиву.

#include <iostream>
using namespace std;

int main()
{
	int random_dig_arr[7];
	
	srand(time(NULL));
	for (int i = 0; i < 7; i++)
	{
		random_dig_arr[i] = -12 + rand() % 50;

	}
	cout << "Array with numbers from -12 to 50: " << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << random_dig_arr[i] << "  " << endl;
	}

	int count_pos = 0;
	int count_neg = 0;

	for (int i = 0; i < 7; i++)

	{

		if (random_dig_arr[i] < 0)

			count_neg++;

		if (random_dig_arr[i] > 0)

			count_pos++;
	}

	cout << "The number of negative: " << count_neg << endl;

	cout << "The number of positive: " << count_pos << endl;

	return 0;
}