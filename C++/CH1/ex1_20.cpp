#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item item;

    std::cout << "Enter item: ";
    std::cin >> item;

    std::cout << item << std::endl;

    return 0;
}