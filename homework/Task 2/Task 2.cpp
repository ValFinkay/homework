//2) ���� 2 - ������� �����.������� ����� ����� ����� ������ �� ������ ���� ���� ����(������������� ��������� % ��� ���������� ��������(�����) �����.

#include <iostream>
    int main()
{
    std::cout << "Enter a two-digit number" << std::endl;
    int n;
    std::cin >> n;

    int n1, n2, sum;
    n2 = n % 10;
    n1 = n / 10 % 10;
    sum = n1 + n2;
    std::cout << "Digits of numbers: " << n1 << " and  " << n2 << std::endl;
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
