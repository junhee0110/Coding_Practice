#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item curr, val;

    if (std::cin >> curr)
    {
        int count = 1;
        while (std::cin >> val)
        {
            if (val.isbn() == curr.isbn())
                count++;
            else
            {
                std::cout << curr.isbn() << " occurs " << count << " times " << std::endl;
                curr = val;
                count = 1;
            }
        }
        
        std::cout << curr.isbn() << " occurs " << count << " times " << std::endl;
    }

    return 0;
}