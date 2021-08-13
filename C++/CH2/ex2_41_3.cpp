#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(void)
{
    Sales_data sum, item;
    double price_item, price_sum;

    std::cout << "Enter transactions :" << std::endl;
    while (std::cin >> item.bookNo >> item.units_sold >> price_item)
    {
        item.revenue = price_item * item.units_sold;
        sum.bookNo = item.bookNo;
        sum.revenue += item.revenue;
        sum.units_sold += item.units_sold;
        price_sum = sum.revenue / sum.units_sold;
    }

    std::cout << sum.bookNo << ' ' << sum.units_sold << ' '
            << sum.revenue << ' ' << price_sum << std::endl;

    return 0;
}