//6) �������� ��������, ��� ���������� ������ ����� ������� ���� ������� ����� � ���� ����.������ ������ � ���������. 
// (���� ������ ������ ����� ������� ����� �� 686 ������ ���)

#include <iostream>

int main()
{
	const int DAYS_TURN_MARS = 686;
	const int DAY_IN_EATH_YEAR = 365;

	std::cout << "How many circles has Mars made?" << std::endl;
	int mars;
	std::cin >> mars;

	double years = mars * static_cast<double>(DAYS_TURN_MARS) / DAY_IN_EATH_YEAR;
	//static_cast<double>(_) - ������� ����������� ����, ��� ������� �������� ������ �����

	std::cout << "This is " << years << " earth years" << std::endl;
	return 0;
}
