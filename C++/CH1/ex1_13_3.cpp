#include <iostream>

int main(void)
{
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++)
        std::cout << i << std::endl;

    return 0;
}