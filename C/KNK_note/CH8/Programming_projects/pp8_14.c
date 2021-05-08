// File name: pp8_14.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 14

#include <stdio.h>

int main(void)
{
    char sentence[100];
    int endPoint;

    printf("Enter a sentence: ");
    for (int x = 0; ; x++)
    {
        sentence[x] = getchar();
        if (sentence[x] == '.' || sentence[x] == '!' || sentence[x] == '?')
        {
            endPoint = x -1;
            break;
        }

        if (sentence[x] == '\n')
        {
            endPoint = x - 1;
            sentence[x] = ' ';
            break;
        }
    }

        for (int x = endPoint, word_end = endPoint, word_begin; x >= 0; x--)
    {
        if(sentence[x] == ' ')
        {
            word_begin = x + 1;
            for (int y = word_begin; y <= word_end; y++)
                putchar(sentence[y]);
            putchar(' ');
            word_end = x - 1;
        }

        else if (x == 0)
        {
            word_begin = 0;
            for (int y = word_begin; y <= word_end; y++)
                putchar(sentence[y]);
        }
    }

    printf("%c\n", sentence[endPoint + 1]);

    return 0;
}