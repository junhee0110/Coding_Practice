#include "Hugeint.h"

int main(){
HugeInteger one;
HugeInteger two;

one.input();
std::cout<<"OUTPUT : ";
one.output();
std::cout<<std::endl;

two.input();
std::cout<<"OUTPUT : ";
two.output();
std::cout<<std::endl;

one.subtract(two);
std::cout<<"뺄셈 결과 : ";
one.output();
std::cout<<std::endl;

std::cout<<"같아?"<<isEqualTo(one,two)<<std::endl;
std::cout<<"달라?"<<isNotEqualTo(one,two)<<std::endl;
std::cout<<"더 커?"<<isGreaterThan(one,two)<<std::endl;
std::cout<<"더 작아?"<<isLessThan(one,two)<<std::endl;
std::cout<<"더 크거나 같아?"<<isGreaterThanOrEqualTo(one,two)<<std::endl;
std::cout<<"더 작거나 같아?"<<isLessThanOrEqualTo(one,two)<<std::endl;
std::cout<<"0이야?"<<isZero(one)<<std::endl;
std::cout<<"0이야?"<<isZero(two)<<std::endl;

return 0;
}
