// File name: ex9_15.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 15
#include <stdio.h>

double median(double, double, double);

int main(void)
{
    printf("%lg %lg %lg => %lg\n", 1.0, 2.0, 3.0, median(1.0,2.0,3.0));
    printf("%lg %lg %lg => %lg\n", 2.0, 1.0, 3.0, median(2.0,1.0,3.0));
    printf("%lg %lg %lg => %lg\n", 1.0, 3.0, 2.0, median(1.0,3.0,2.0));

    return 0;
}

double median(double x, double y, double z)
{
    return x > y 
    ? (y > z ? y : (x > z ? z : x))
    : (x > z ? x : (y > z ? z : y));
}