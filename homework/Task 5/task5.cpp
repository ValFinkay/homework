//5) ��������� ��������, ��� ��������� ����� � ������������ � �������� ��������� �� ������� ��� � ����� ����, ������ �� ������� � ���� � �������.�������!� ������������� ��������.

#include <iostream>

int main()
{
	std::cout << "Enter your amount" << std::endl;
	double amount;
	std::cin >> amount;

	const double hr_in_eur = 40.4000;
	const double hr_in_usd = 37.5500;
	const double hr_in_gld = 70275.7100;

	std::cout << "You have " << amount << " hryvnia" << std::endl;
	std::cout << "This is " << amount / hr_in_eur << " EUR; " << amount / hr_in_usd << " USD; " << amount / hr_in_usd << " ounce of gold." << std::endl;

	return 0;
}
