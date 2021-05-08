// File name: pp7_11.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 11

#include <stdio.h>

int main(void)
{
    char c, first_name;

    printf("Enter a first and last name: ");

    first_name = getchar();

    while((c = getchar()) != ' ');

    printf("You entered the name: ");
    while((c = getchar()) != '\n')
        putchar(c);

    printf(", %c\n",first_name);

    return 0;
}