//1.  ористувач вводить температуру.ѕрограма виводить пов≥домленн€ про стан орган≥зму
//(наприклад, 35 - 36.0 Ц понижена температура, стан ослабленого орган≥зму, 36.1 Ц 36.8 Ц нормальна температура, людина здорова ≥ т.≥.).


#include <iostream>

int main()
{
    float temper = 0.0;

    std::cout << "Enter your temperature: " << std::endl;
    std::cin >> temper;

    if (temper <= 34.9)
    {
        std::cout << " Sorry, you`r dead " << std::endl;
    }
    else if (temper >= 35.0 && temper <= 36.0)
    {
        std::cout << " Your body is weakened. Pay attention to your health, please " << std::endl;
    }
    else if (temper >= 36.1 && temper < 36.8)
    {
        std::cout << " Your temperature is within normal limits " << std::endl;
    }
    else
    {
        std::cout << " You got sick. Stay at home, please " << std::endl;
    }

    return 0;
}