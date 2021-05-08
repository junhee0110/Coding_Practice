// File name: ex11_5.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 5

#include <stdio.h>

void split_time(long, int *, int *, int *);

int main(void)
{
    long total;
    int hour, minute, sec;

    printf("Enter total seconds: ");
    scanf("%ld", &total);

    split_time(total, &hour, &minute, &sec);
    printf("%ld => %2d:%02d:%02d\n", total, hour, minute, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    *min = total_sec / 60 % 60;
    *hr = total_sec / 60 / 60;
}