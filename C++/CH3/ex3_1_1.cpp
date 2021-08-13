#include <iostream>

using std::cout;

int main(void)
{
    int val = 50, sum = 0;

    while (val <= 100)
        sum += val++;

    cout << "Sum of numbers from 50 to 100 is "  << sum << std::endl;

    return 0;
}