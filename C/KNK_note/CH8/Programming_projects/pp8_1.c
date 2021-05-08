// File name: pp8_1.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 1

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10] = {0};
    bool repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit] += 1;
        if (digit_seen[digit] >= 2 && !repeated)
            repeated = true;

        n /= 10;
    }

    if (!repeated)
    {
        printf("No repeated digit\n");
        return 0;
    }

    printf("Repeated digit(s) : ");

    for (int i = 0; i < (int) sizeof(digit_seen) / sizeof(digit_seen[0]); i++)
    {
        if (digit_seen[i] >= 2)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}