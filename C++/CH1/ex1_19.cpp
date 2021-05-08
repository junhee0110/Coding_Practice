#include <iostream>

int main(void)
{
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num2 > num1)
        while (num1 <= num2)
            std::cout << num1++ << std::endl;
    else
        while (num2 <= num1)
            std::cout << num2++ << std::endl;

    return 0;
}