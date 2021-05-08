#include <stdio.h>
#define N 100

int main(void)
{
    char c, text[N], *p = text;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && p < text + 100)
        *(p++) = c;

    printf("Reversal is: ");
    for (--p; p >= text; p--)
        putchar(*p);

    return 0;
}