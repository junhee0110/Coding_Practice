#include <iostream>

int main(void)
{
    int v1 = 0, v2 = 0;

    std::cout << "Enter a number: ";
    std::cin >> v1 >> v2;

    std::cout << "The multiplication of " << v1 << " and " << v2
                << " is " << v1 * v2 << std::endl;

    return 0;
}