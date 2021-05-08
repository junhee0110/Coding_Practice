// File name: pp6_1.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 1

#include <stdio.h>

int main(void)
{
    float max = 0.0f, input;
    
    do
    {
        printf("Enter a number: ");
        scanf("%f", &input);
        if (input >= max)
            max = input;
    } while(input > 0.0f);

    printf("\nThe largest number entered was %g\n", max);

    return 0;
}