// File name: pp5_1.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number / 1000)
        printf("The number %d has a 4 digits\n", number);
    else if(number / 100)
        printf("The number %d has a 3 digits\n", number);
    else if(number / 10)
        printf("The number %d has a 2 digits\n", number);
    else
        printf("The number %d has a 1 digits\n", number);

    return 0;
}