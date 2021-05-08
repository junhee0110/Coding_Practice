// File name: pp7_13.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 13

#include <stdio.h>

int main(void)
{
    int length = 0, num = 1;
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        switch(c)
        {
            case ' ':
                num++;
                break;
            default:
                length++;
                break;
        }
    }

    printf("Average word length: %.1f\n", (float) length / num);

    return 0;
}