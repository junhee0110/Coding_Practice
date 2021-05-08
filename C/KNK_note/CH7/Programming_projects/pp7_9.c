// File name: pp7_9.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 9

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ampm;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hour, &minute, &ampm);

    if (toupper(ampm) == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

    return 0;
}