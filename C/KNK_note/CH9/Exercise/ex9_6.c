// File name: ex9_56.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 6

#include <stdio.h>

int digit(int, int);

int main(void)
{
    printf("%d, %d => %d\n", 829, 1 ,digit(829,1));
    printf("%d, %d => %d\n", 829, 2 ,digit(829,2));
    printf("%d, %d => %d\n", 829, 3 ,digit(829,3));
    
    return 0;
}

int digit(int n, int k)
{
    for (int i = 1; i < k; i++)
        n /= 10;

    return n % 10;
}