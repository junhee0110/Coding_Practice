// File name: pp2_2.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 2

#include <stdio.h>
#define PI 3.141592f

int main(void)
{
    int radius = 10;
    
    printf("Volume of a sphere with a 10-meter radius : %f",(4.0f / 3.0f) * radius * radius * radius * PI);
    //printf("Volume of a sphere with a 10-meter radius : %f",(4 / 3) * radius * radius * radius * PI);

    return 0;
}
