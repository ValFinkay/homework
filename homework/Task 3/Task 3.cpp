//3. Дано рік(номер року).Визначити чи рік високосний.
//Рік високосний, якщо число року року ділиться націло на 4 і не ділиться на 100(наприклад високосними є 1996, 1992 роки).
//Серед років, число яких має дві останн і цифри нулі(тобто рік ділиться на 100), 
//високосними є ті що діляться на 400(н - д, 1600, 1200 – високосні, а 1700, 1900 - ні).

#include <iostream>

int main()
{
	std::cout << "Enter a year " << std::endl;
	short year = 0;
	std::cin >> year;

	bool determineYear(int year);
	{
		if (year % 400 == 0) {
			return true;
		}

		else if (year % 100 == 0) {
			return false;
		}

		else if (year % 4 == 0) {
			return true;
		}

		else {
			return false;
		}
	}
	
	determineYear(year) ? std::cout << "This year is leap" << std::endl	
		: std::cout << "This year is not leap";

	return 0;
}
