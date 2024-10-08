#include <iostream>
#include <iomanip>

#define PI 3.141592653

int main(int argc, char* argv[])
{
    float radius;
    std::cin >> radius;

    float area = PI * radius * radius;

    std::cout << std::fixed << std::setprecision(9);
    std::cout << area << "\n";

    return 0;
}