#include <iostream>
#include "Sales_data.h"

int main(void)
{
    Sales_data total;
    double price_total;

    if (std::cin >> total.bookNo >> total.units_sold >> price_total)
    {
        total.revenue = total.units_sold * price_total;
        
        Sales_data trans;
        double price_trans;
        while(std::cin >> trans.bookNo >> trans.units_sold >> price_trans)
        {
            trans.revenue = trans.units_sold * price_trans;
            if (total.bookNo == trans.bookNo)
            {
                total.revenue += trans.revenue;
                total.units_sold += trans.units_sold;
                price_total = total.revenue / total.units_sold;
            }
            else
            {
                std::cout << total.bookNo << ' ' << total.units_sold << ' '
                << total.revenue << ' ' << total.revenue / total.units_sold << std::endl;
                total = trans;
                price_total = price_trans;
            }
        }
        std::cout << total.bookNo << ' ' << total.units_sold << ' '
                << total.revenue << ' ' << total.revenue / total.units_sold << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}