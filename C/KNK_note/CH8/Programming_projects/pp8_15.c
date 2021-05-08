// File name: pp8_15.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 15

#include <stdio.h>

int main(void)
{
    char text[80];
    int shift;

    printf("Enter message to be encrpted: ");
    for (int i = 0; (text[i] =getchar()) != '\n'; i++);

    printf("Enter shift ammount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (int i = 0; text[i] != '\n'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z') //lower-case
            putchar(((text[i] - 'a') + shift) % 26 + 'a');

        else if (text[i] >= 'A' && text[i] <= 'Z') //upper-case
            putchar(((text[i] - 'A') + shift) % 26 + 'A');

        else
            putchar(text[i]);
    }

    printf("\n");

    return 0;
}