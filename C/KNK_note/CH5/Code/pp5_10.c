// File name: pp5_10.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 10

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade : ");
    scanf("%d", &grade);
    printf("Letter grade : ");

    switch(grade / 10)
    {
        case 10:
            if (grade == 100)
                printf("A\n");
            else
                printf("Error\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}