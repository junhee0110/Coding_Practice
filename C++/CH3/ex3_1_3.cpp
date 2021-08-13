#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    while (num1 <= num2)
        cout << num1++ << endl;

    return 0;
}