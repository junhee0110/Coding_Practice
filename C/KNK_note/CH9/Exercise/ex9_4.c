// File name: ex9_4.c
// Author: Lee Junhee
// Chapter: 9
// Probelm: 4

#include <stdio.h>

int day_of_year(int, int, int);

int main(void)
{
    printf("%d/%d/%d => %d\n", 2021, 4, 28, day_of_year(4, 28, 2021));
    printf("%d/%d/%d => %d\n", 2021, 2, 16, day_of_year(2, 16, 2021));
    printf("%d/%d/%d => %d\n", 2021, 1, 31, day_of_year(1, 31, 2021));

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int result = 0;
    
    for (int i = 0; i < month; i++)
    {
        switch(i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                result += 31; break;

            case 4: case 6: case 9: case 11:
                result += 30; break;

            case 2:
                result += (year % 4 == 0 ? 29 : 28); break;
        }
    }

    return result + day;
}