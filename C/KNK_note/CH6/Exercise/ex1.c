// File name: ex1.c
// Author: Lee Junhee
// Chapter: 6

#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 128)
    {
        printf("%d", i);
        i *= 2;
    }

    return 0;
}