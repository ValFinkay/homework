//8) Дано одновимірний масив.Знайти скільки елементів знаходиться між першим і останнім відємним елементом.

#include <iostream>
#include <stddef.h>

using namespace std;

int main()
{
	const int n = 5;
	int arr[n]{ 5, -3, 7, -4, -6 };
	int a = NULL;
	int b = NULL;

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] < 0) 
		{
			if (a) 
			{
				b = i;
			}
			else 
			{
				a = i;
			}
		}
	}

	if (b)
	{
		int resuit = (b - a) - 1;
		cout << resuit;
	}
	else 
	{
		cout << "Error";
	}

}
