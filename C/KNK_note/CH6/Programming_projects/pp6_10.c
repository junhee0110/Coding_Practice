// File name: pp6_10.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 10

#include <stdio.h>

int main(void)
{
    int day_min, month_min, year_min, day, month, year;

    for (int x = 0; ; x++)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d / %d / %d", &month, &day, &year);

        if(month == 0 &&  day == 0 && year == 0)
            break;

        if (!x)
        {
            day_min = day, month_min = month, year_min = year;
            continue;
        }

        if (month + year * 12 < month_min + year_min * 12)
            day_min = day, month_min = month, year_min = year;
        else if (month + year * 12 == month_min + year_min * 12)
        {
            if (day < day_min)
                day_min = day, month_min = month, year_min = year;
        }
    }

    printf("%d/%d/%02d is the earliest date\n", month_min, day_min, year_min);

    return 0;
}