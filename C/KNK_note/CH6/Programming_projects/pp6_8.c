// File name: pp6_8.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 8

#include <stdio.h>

int main(void)
{
    int n, start;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int x = 1; x < start; x++)
        printf("    ");
    
    for (int x = 1; x <= n; x++)
    {
        printf("%4d", x);

        if(x % 7 == 8 - start)
            printf("\n");
    }

    printf("\n");

    return 0;
}