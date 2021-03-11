// File name: pp5_7.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int min1, max1, min2, max2;

    printf("Enter four integers : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 < num2)
    {
        min1 = num1;
        max1 = num2;
    }
    else
    {
        min1 = num2;
        max1 = num1;
    }

    if(num3 < num4)
    {
        max2 = num4;
        min2 = num3;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }

    if(max1 > max2)
        printf("Largest : %d\n", max1);
    else
        printf("Largest : %d\n", max2);

    if(min1 > min2)
        printf("Smallest : %d\n", min2);
    else
        printf("Smallest : %d\n", min1);
    
    return 0;
}