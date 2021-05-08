// File name: pp5_9.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 9

#include <stdio.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d / %d / %d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d / %d / %d", &month2, &day2, &year2);

    if (year1 * 12 + month1 > year2 * 12 + month2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
    else if (year1 * 12 + month1 < year2 * 12 + month2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
    else
    {
        if (day1 > day2)
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
        else if (day2 > day1)
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
        else
            printf("Two dates are same\n");
    }

    return 0;
}