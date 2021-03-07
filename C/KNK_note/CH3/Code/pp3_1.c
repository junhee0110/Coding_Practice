// File name: pp3_1.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n", year,month,day);

    return 0;
}