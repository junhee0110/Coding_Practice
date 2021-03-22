// File name: pp5_2.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    printf("Equivalent 12-hour time: ");
    if (hour == 0)
        printf("12:%d AM\n", minute);
    else if (hour < 12)
        printf("%d:%d AM\n", hour, minute);
    else if (hour == 12)
        printf("12:%d PM\n", minute);
    else
        printf("%d:%d PM\n", hour - 12, minute);

    return 0;
}