//4. ¬водитьс€ в≥к ≥ стать людини.¬изначити чи людина пенс≥йного в≥ку(ж≥нки Ц п≥сл€ 55, чолов≥ки Ц п≥сл€ 60).

#include <iostream>

int main()
{
    std::cout << "Enter your sex: m/f " << std::endl;
    char sex = 0;
    std::cin >> sex;

    std::cout << "Enter your age " << std::endl;
    int age = 0;
    std::cin >> age;

   
    if ((sex == 'm' || age >= 60) && (sex == 'f' || age >= 55))
    {
        std::cout << "It's time for you to retire " << std::endl;
    }
     
    else
    {
        std::cout << "It is too early for you to retire " << std::endl;
    }

    return 0;
}