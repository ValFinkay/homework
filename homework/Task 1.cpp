//1) Оголосити одновимірний масив з 10 елементів типу int.Заповнити його значеннями з клавіатури, вивести на екран та підрахувати добуток елементів масиву

#include <iostream>
using namespace std;

int main() 
{
    int numbers[10];

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; ++i)
    {
        cin >> numbers[i];
    }

    cout << "Your numbers are: " << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << numbers[i] << endl;
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i)

    {
        sum += numbers[i];
        
    }
    cout << "Sum = " << sum << endl;

    return 0;
}