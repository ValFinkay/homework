// 2.Дано час(години, хвилини, секунди). Визначити чи час допустимий( н-д 25.61.60 – недопустимий).

#include <iostream>

int main()
{
    std::cout << "Enter hours " << std::endl;
    int hour = 0;
    std::cin >> hour;

    std::cout << "Enter minutes " << std::endl;
    int minutes = 0;
    std::cin >> minutes;

    std::cout << "Enter seconds" << std::endl;
    int seconds = 0;
    std::cin >> seconds;

    if (hour >= 0 && hour <= 24)
    { 
        if (minutes >= 0 && minutes <= 59)
        {
            if (seconds >= 0 && seconds <= 59)

                std::cout << "Your time is " << hour << ":" << minutes << ":" << seconds << std::endl;

        }
    }
    else 
        std::cout << "You entered the wrong time" << std::endl;

}