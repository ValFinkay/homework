//9.Написати програму, яка переводить введену користувачем довжину в сантиметри у інші одиниці довжини за вибором користувача
//(метри, дециметри, міліметри).Примітка!Роботу задачі організувати через систему меню

#include <iostream>

int main()
{
	float centimeters = 0;
	char op = 0;

    std::cout << "Enter the length in centimeters: " << std::endl;
    std::cin >> centimeters;

    float meters = centimeters / 1000;
	float decemetrs = centimeters / 10;
	float milimetrs = centimeters * 10;

    std::cout << "Choose which unit of length you want to convert it to: " << std::endl;
    std::cout << "1 = in meters; 2 = in decimeters; 3 = in millimeters" << std::endl;
    std::cin >> op;

	switch (op)
	{
	
	case '1':
		std::cout << centimeters << " centimeters is " << meters << " meters" << std::endl;
		break;

	case '2':
		std::cout << centimeters << " centimeters is " << decemetrs << " decemetrs" << std::endl;
		break;

	case '3':
		std::cout << centimeters << " centimeters is " << milimetrs << " milimetrs" << std::endl;
		break;

	default:
		std::cout << "Error! Please, choose from the following conditions" << std::endl;

	}

return 0;
}