#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(void)
{
    Sales_data curr, val;
    double price_curr, price_val;

    while (std::cin >> curr.bookNo >> curr.units_sold >> price_curr)
    {
        curr.revenue = price_curr * curr.units_sold;

        int count = 1;
        while (std::cin >> val.bookNo >> val.units_sold >> price_val)
        {
            val.revenue = price_val * val.units_sold;
            if (val.bookNo == curr.bookNo)
                count++;
            else
            {
                std::cout << curr.bookNo << " occurs " << count << " times" << std::endl;
                curr = val;
                count = 1;
            }
        }

        std::cout << curr.bookNo << " occurs " << count << " times" << std::endl;
    }

    return 0;
}