#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    int value = 10;

    while (value >= 0)
        cout << value-- << endl;

    return 0;
}