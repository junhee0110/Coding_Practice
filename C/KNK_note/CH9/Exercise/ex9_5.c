// File name: ex9_5.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 5

#include <stdio.h>

int num_digits(int);

int main()
{
    printf("%d => %d\n", 153, num_digits(153));
    printf("%d => %d\n", 15233, num_digits(15233));

    return 0;
}

int num_digits(int n)
{
    int result = 0;
    
    do 
    {
        n /= 10;
        result++;
    } while (n != 0);

    return result;
}