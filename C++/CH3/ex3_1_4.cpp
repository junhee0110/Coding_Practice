#include <iostream>

using std::string;
using std::cout; using std::cin; using std::endl;
using std::cerr;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(void)
{
    Sales_data total;
    double price_total;

    if (cin >> total.bookNo >> total.units_sold >> price_total)
    {
        total.revenue = total.units_sold * price_total;
        
        Sales_data trans;
        double price_trans;
        while(cin >> trans.bookNo >> trans.units_sold >> price_trans)
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
                cout << total.bookNo << ' ' << total.units_sold << ' '
                << total.revenue << ' ' << total.revenue / total.units_sold << endl;
                total = trans;
                price_total = price_trans;
            }
        }
        cout << total.bookNo << ' ' << total.units_sold << ' '
                << total.revenue << ' ' << total.revenue / total.units_sold << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}