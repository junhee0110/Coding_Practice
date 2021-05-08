#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item item, sum;

    std::cout << "Enter transactions :" << std::endl;
    while (std::cin >> item)
        sum += item;

    std::cout << sum << std::endl;

    return 0;
}