// File name: pp6_6.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 6

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i * i <= n; i+=2)
        printf("%d\n", i * i);

    return 0;
}