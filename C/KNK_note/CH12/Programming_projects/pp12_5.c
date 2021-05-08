#include <stdio.h>

int main(void)
{
    char sentence[100], *endPoint;

    printf("Enter a sentence: ");
    for (char *p = sentence; ; p++)
    {
        *p = getchar();
        if (*p == '.' || *p == '!' || *p == '?')
        {
            endPoint = p - 1;
            break;
        }

        if (*p == '\n')
        {
            endPoint = p - 1;
            *p = ' ';
            break;
        }
    }

    for (char *p = endPoint, *word_end = endPoint, *word_begin; p >= sentence; p--)
    {
        if(*p == ' ')
        {
            word_begin = p + 1;
            for (char *q = word_begin; q <= word_end; q++)
                putchar(*q);
            putchar(' ');
            word_end = p - 1;
        }

        else if (p == sentence)
        {
            word_begin = sentence;
            for (char *q = word_begin; q <= word_end; q++)
                putchar(*q);
        }
    }

    printf("%c\n", *(endPoint + 1));

    return 0;
}