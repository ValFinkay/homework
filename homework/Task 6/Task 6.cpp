//6.Вводяться 10 чисел.Знайти суму та середнє арифметичне цих чисел. - while

#include <iostream>

int main() 
{
    int x = 10, i = 0;
    float avg = 0, sum = 0, y;

    std::cout << "Enter 10 elements one by one" << std::endl;

    while (i < x) 
    {
        std::cin >> y;
        sum += y;
        i++;
    }

    std::cout << "The sum is = " << sum << std::endl;

    avg = sum/= x;
    std::cout << "The average of numbers is = " << avg << std::endl;

    return 0;
}