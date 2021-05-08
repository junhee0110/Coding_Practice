// File name: ex9_11.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 11

#include <stdio.h>
#define N 8

float compute_GPA(char[], int);

int main(void)
{
    char grades[N] = {'A', 'A', 'A', 'B', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < N; i++)
        printf("%c ", grades[i]);

    putchar('\n');

    printf("average of the grades : %g\n", compute_GPA(grades, N));

    return 0;
}

float compute_GPA(char grades[], int len)
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        switch(grades[i])
        {
            case 'A': sum += 4; break;
            case 'B': sum += 3; break;
            case 'C': sum += 2; break;
            case 'D': sum += 1; break;
            case 'F': break;
            default: break;
        }
    }

    return (double) sum / len;
}