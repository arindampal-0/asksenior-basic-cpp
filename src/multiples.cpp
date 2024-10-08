#include <iostream>

int main(int argc, char* argv[])
{
    int num1, num2;
    std::cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0)
    {
        if (num1 % num2 == 0 || num2 % num1 == 0)
        {
            std::cout << "Multiples\n";
        }
        else
        {
            std::cout << "No Multiples\n";
        }
    }

    return 0;
}