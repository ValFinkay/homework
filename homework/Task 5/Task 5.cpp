//5) ���� 2 �����.�������� �����.������� ����������� ������ : � ����� ����� �����(�����, ����) �������.

#include <iostream>

int main()
{
	int a = 7;
	int b = 7;

	if (a > b)
	{
		std::cout << "a is " << a << " > b is " << b << std::endl;

	}
	else if (a < b)
	{
		std::cout << "a is " << a << " < b is " << b << std::endl;
	}
	else 
	{
		std::cout << "a is " << a << " = b is " << b << std::endl;
	}

	return 0;
}