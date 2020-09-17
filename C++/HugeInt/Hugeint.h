#ifndef HUGEINT
#define HUGEINT
#include <iostream>

class HugeInteger{

private:

    int digit[40] = {0,};
    int n = 0;


public:
    int const * digit_ptr =digit;
    void input();
    void output();
    void add(HugeInteger &A);
    void subtract(HugeInteger &A);
};

bool isEqualTo(HugeInteger &A, HugeInteger &B);
bool isNotEqualTo(HugeInteger &A, HugeInteger &B);
bool isGreaterThan(HugeInteger &A, HugeInteger &B);
bool isLessThan(HugeInteger &A, HugeInteger &B);
bool isGreaterThanOrEqualTo(HugeInteger &A, HugeInteger &B);
bool isLessThanOrEqualTo(HugeInteger &A, HugeInteger &B);
bool isZero(HugeInteger &A);

#endif