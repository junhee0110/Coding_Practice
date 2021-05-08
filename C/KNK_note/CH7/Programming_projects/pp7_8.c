// File name: pp7_8.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 8

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ampm;

    printf("Enter a 12-hour time : ");
    scanf("%d : %d %c", &hour, &minute, &ampm);
    while(getchar() != '\n');

    if (toupper(ampm) == 'P' && hour != 12)
        hour += 12;

    //480, 583 679 767 840 945 1140 1305;
    if (60 * hour + minute < 532)
        printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (60 * hour + minute < 631)
        printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (60 * hour + minute < 723)
        printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (60 * hour + minute < 804)
        printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (60 * hour + minute < 893)
        printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (60 * hour + minute < 1043)
        printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (60 * hour + minute < 1223)
        printf("Closet departure time is 7:00 p.m., arriving at 9:25 p.m.\n");
    else
        printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}