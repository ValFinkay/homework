//1) ������ 2 ����� �����(���� ���� int).������ �� ������� ���� �� ������� �����.

#include <iostream>

int main()
{
	std::cout << "Enter the first number" << std::endl;
	double number1;
	std::cin >> number1;

	std::cout << "Enter the second number" << std::endl;
	double number2;
	std::cin >> number2;

	double total = number1 + number2;

	std::cout << "Sum of two numbers = " << total << std::endl;

	return 0;
}

