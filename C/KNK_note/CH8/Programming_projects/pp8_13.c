// File name: pp8_13.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 13

#include <stdio.h>

int main(void)
{
    char c, first_name, last_name[20];
    int i = 0;

    printf("Enter a first and last name: ");

    first_name = getchar();

    while((c = getchar()) != ' ');

    while((c = getchar()) != '\n')
    {
        last_name[i] = c;
        i++;
    }

    printf("You entered the name: ");
    for (int x = 0; x < i; x++)
        putchar(last_name[x]);

    printf(", %c\n",first_name);

    return 0;
}