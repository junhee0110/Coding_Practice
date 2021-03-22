// File name: pp3_4.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 4

#include <stdio.h>

int main(void)
{
    int one, two, three;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("( %d ) %d - %d", &one, &two, &three);
    printf("You entered %d.%d.%d\n", one, two, three);

    return 0;
}