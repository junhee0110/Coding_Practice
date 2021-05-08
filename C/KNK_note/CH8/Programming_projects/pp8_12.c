// File name: pp8_12.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 12

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int value = 0;
    char c;
    const int scrabble[26] =    {1, 3, 3, 2, 1, 4, 2,
                                4, 1, 8, 5, 1, 3, 1, 1,
                                3, 10, 1, 1, 1, 1, 4, 4, 
                                8, 4, 10};

    printf("Enter a word: ");

    while ((c = getchar()) != '\n')
        value += scrabble[toupper(c) - 'A'];

    printf("Scrabble value: %d\n", value);

    return 0;
}