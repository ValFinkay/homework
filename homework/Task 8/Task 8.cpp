//8.Написати програму яка обчислює суму семи чисел, які вводяться з клавіатури. - do..while

#include <iostream>

int main()
{
    int x = 7, i = 0, sum = 0, y;
    
    do {
        std::cout << "Enter number " << std::endl;
        std::cin >> y;
        sum += y;
        i++;
    }

    while (i < x);
   
    std::cout << "The sum is = " << sum << std::endl;

    return 0;
}