//5. Вивести на екран цілі числа від 1 до 100. - while

#include <iostream>

int main()
{
    int count = 1;
    while (count < 101)
    {
        std::cout << count << " " << std::endl;
        ++count;
    }
 
    return 0;
}