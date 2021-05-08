// File name: pp11_2.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 2

#include <stdio.h>

void find_closest_flight(int, int *, int *);
void print_time(int);

int main(void)
{
    int hour, minute, departure, arrival;

    printf("Enter a 24-hour time : ");
    scanf("%d : %d", &hour, &minute);

    find_closest_flight(hour * 60 + minute, &departure, &arrival);

    printf("Closest departure time is ");
    print_time(departure);
    printf(", arriving at ");
    print_time(arrival);
    putchar('\n');

    return 0;
}

void find_closest_flight(int min, int *departure_time, int *arrival_time)
{
    const int departure[8] =    {8 * 60, 
                                9 * 60 + 43,
                            11 * 60 + 43,
                            12 * 60 + 47,
                            14 * 60,
                            15 * 60 + 45,
                            19 * 60,
                            21 * 60 + 45};

    const int arrival[8] =  {10 * 60 + 16,
                            11 * 60 + 52,
                            13 * 60 + 31,
                            15 * 60,
                            16 * 60 + 8,
                            17 * 60 + 55,
                            21 * 60 + 20,
                            23 * 60 + 58};

    for (int i = 0; i < 8; i++)
    {
        if (min < (departure[i] + departure[i + 1]) / 2)
        {
            *departure_time = departure[i];
            *arrival_time = arrival[i];
            break;
        }

        if (i == 6)
        {
            *departure_time = departure[7];
            *arrival_time = arrival[7];
            break;
        }
    }
}

void print_time(int min)
{
    if (min / 60 == 0)
        printf("12:%02d a.m.", min % 60);
    else if (min / 60 > 0 && min / 60 < 12)
        printf("%d:%02d a.m.", min / 60, min % 60);
    else if (min / 60 == 12)
        printf("12:%02d p.m.", min % 60);
    else
        printf("%d:%02d p.m.", min / 60 - 12, min % 60);    
}