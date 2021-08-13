#include <iostream>

int main(void)
{
    int i = 0, &r = i;
    auto a = r; // int
    const int ci = i, &cr = ci;
    auto b = ci; // int
    auto c = cr; // int
    auto d = &i; // pointer to int
    auto e = &ci; // pointer to const int
    auto &g = ci; // reference to const int

    std::cout << a << ' ' << b << ' ' << c
                << ' ' << d << ' ' << e << ' ' << g << std::endl;

    a = 42; // a is 42
    b = 42; // b is 42
    c = 42; // c is 42
    //d = 42; // invalid
    //e = 42; // invalid
    //g = 42; // invalid

    std::cout << a << ' ' << b << ' ' << c
                << ' ' << d << ' ' << e << ' ' << g << std::endl;

    return 0;

}