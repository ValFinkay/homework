//10) ���� 2 �����.���� ����� ����� ����� ������� ������� ������ �������� ������.������� �������� ������ �� �����.

#include <iostream>

int main()
{
	int a = 10, b = 2;

	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
		
	}

	std::cout << "a = " << a << " and b = " << b << std::endl;

	return 0;
}
