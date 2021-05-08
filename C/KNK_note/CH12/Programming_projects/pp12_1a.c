#include <stdio.h>
#define N 100

int main(void)
{
    int i = 0;
    char c, text[N];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && i < 100)
        text[i++] = c;

    printf("Reversal is: ");
    for (int j = i - 1; j >= 0; j--)
        putchar(text[j]);

    return 0;
}