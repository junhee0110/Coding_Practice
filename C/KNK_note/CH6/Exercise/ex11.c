// File name: ex11.c
// Author: Lee Junhee
// Chapter: 6

#include <stdio.h>

int main(void)
{
    int sum = 0, i;

    for (i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}