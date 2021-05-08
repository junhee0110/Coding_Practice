#include <iostream>

int main(void)
{
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    while (num1 <= num2)
        std::cout << num1++ << std::endl;

    return 0;
}