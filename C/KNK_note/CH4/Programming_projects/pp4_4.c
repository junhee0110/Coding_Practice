// File name: pp4_4.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 4

#include <stdio.h>

int main(void)
{
    int origin, one, two, three, four, five;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &origin);

    printf("\nUsing %%o\n\n");
    printf("In octal, your number is: ");
    printf("%05o\n", origin);

    printf("\nUsing Arithmetic method\n\n");

    one = origin % 8;
    two = origin / 8 % 8;
    three = origin / 8 / 8 % 8;
    four = origin / 8 / 8 / 8 % 8;
    five = origin / 8 / 8 / 8 / 8;

    printf("In octal, your number is: ");
    printf("%d%d%d%d%d\n", five, four, three, two, one);

    return 0;
}