#include <stdio.h>
#define N 100

int main(void)
{
    char c, text[N], *p = &text[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && p < &text[N])
        *(p++) = c;

    printf("Reversal is: ");
    for (--p; p >= &text[0]; p--)
        putchar(*p);

    return 0;
}