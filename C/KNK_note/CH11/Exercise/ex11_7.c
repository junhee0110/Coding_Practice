// File name: ex11_7.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 7

#include <stdio.h>

void split_date(int, int, int *, int *);

int main(void)
{
    int day_of_year, year, month, day;

    input:
    printf("Enter day of year (1~366): ");
    scanf("%d", &day_of_year);
    if (day_of_year < 1 || day_of_year > 366) goto input;
    
    printf("Enter year: ");
    scanf("%d", &year);

    split_date(day_of_year, year, &month, &day);

    printf("%d day(s) of %d => %d/%d\n", day_of_year, year, month, day);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    for (int i = 1; i <= 12; i++)
    {
        switch(i)
        {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                if (day_of_year <= 31)
                {
                    *month = i;
                    *day = day_of_year;
                    return;
                }
                else day_of_year -= 31;
                break;
            case 2:
                if (day_of_year <= (year % 4 == 0 ? 29 : 28))
                {
                    *month = i;
                    *day = day_of_year;
                    return;
                }
                else day_of_year -= (year % 4 == 0 ? 29 : 28);
                break;
            case 4: case 6: case 9: case 11:
                if (day_of_year <= 30)
                {
                    *month = i;
                    *day = day_of_year;
                    return;
                }
                else day_of_year -= 30;
                break;
        }
    } 
}