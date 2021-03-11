// File name: pp5_4.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 4

#include <stdio.h>

int main(void)
{
    float wind;

    printf("Enter Wind Speed (in knots) : ");
    scanf("%f", &wind);

    printf("The corresponding description is ");

    if (wind < 1)
        printf("Calm\n");
    else if (wind <= 3)
        printf("Light air\n");
    else if (wind <= 27)
        printf("Breeze\n");
    else if (wind <= 47)
        printf("Gale\n");
    else if (wind <= 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}