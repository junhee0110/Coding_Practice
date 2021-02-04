// File name: pp2_3.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 3

#include <stdio.h>
#define PI 3.141592f

int main(void)
{
    int radius;

    printf("Enter radius of a sphere: ");
    scanf("%d", &radius);
    
    printf("Volume of a sphere with a 10-meter radius: %f\n",(4.0f / 3.0f) * radius * radius * radius * PI);
    //printf("Volume of a sphere with a 10-meter radius : %f\n",(4 / 3) * radius * radius * radius * PI);

    return 0;
}
