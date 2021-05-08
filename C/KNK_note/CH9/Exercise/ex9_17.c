// File name: ex9_17.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 17
#include <stdio.h>

int fact(int);

int main(void)
{
    printf("%d! = %d\n", 5, fact(5));
    printf("%d! = %d\n", 6, fact(6));
    printf("%d! = %d\n", 7, fact(7));

    return 0;
}

int fact(int n)
{
    int result = 1;
    
    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}