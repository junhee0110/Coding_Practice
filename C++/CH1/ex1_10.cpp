#include <iostream>

int main(void)
{
    int value = 10;

    while (value >= 0)
        std::cout << value-- << std::endl;

    return 0;
}