//3)���� 3 ����� �����.������� �� ����� true, ���� ����� ����������� �� ����������(��������� 1 5 7 ����������� �� ����������, � 1 5 3 - �), ������ ������� - false.

#include <iostream>

int main()
{
    std::cout << "Enter a three number: " << std::endl;

    int a, b, c;
    std::cin >> a >> b >> c;

    if (a < b)
    {
        if (b < c)
        std::cout << " true " << std::endl;
    }
    else
        std::cout << "false" << std::endl;

    return 0;
}
