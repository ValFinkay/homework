//4)�� ������ � ������� 4 ��� ������.��� ���� ������� ������(��������� ��������) �� ������� ������, 
// ���� ��� ���������.���������� �� ������� ������� �������.����������� ���� � ������ ����.

#include <iostream>

enum Price
// ��� ����� �� ������, ��� ��������� ��� ������� �� ���������
{
	pr1 = 8, 
	pr2 = 2, 
	pr3 = 5, 
	pr4 = 9
};

enum Product
{
	p1 = 2,
	p2 = 5,
	p3 = 11,
	p4 = 4
};

int main()
{
	int cost1 = p1 * pr1;
	int cost2 = p2 * pr2;
	int cost3 = p3 * pr3;
	int cost4 = p4 * pr4;

	std::cout << "The product #1 --> " << p1 << " pieces * " << pr1 << "$ = " << cost1 << "$\n";
	std::cout << "The product #2 --> " << p2 << " pieces * " << pr2 << "$ = " << cost2 << "$\n";
	std::cout << "The product #3 --> " << p3 << " pieces * " << pr3 << "$ = " << cost3 << "$\n";
	std::cout << "The product #4 --> " << p4 << " pieces * " << pr4 << "$ = " << cost4 << "$\n";

	int total_cost = cost1 + cost2 + cost3 + cost4;

	std::cout << "The total cost: " << total_cost << "$" << std::endl;
	return 0;
}
