// File name : ex8_5.c
// Author : Lee Junhee
// Chapter : 8
// Problem : 5

#include <stdio.h>

int main(void)
{
    int fib_numbers[40] = {0, 1}; 

    for(int i = 2; i < (int) sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++)
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];

    for(int i = 0; i < (int) sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++)
        printf("%d ", fib_numbers[i]);

    printf("\n");

    return 0;
}