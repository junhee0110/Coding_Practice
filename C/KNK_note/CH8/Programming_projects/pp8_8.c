// File name: pp8_8.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 8

#include <stdio.h>

int main(void)
{
    int array[5][5], sum, min, max;

    for (int x = 0; x < 5; x++)
    {
        printf("Enter grades of student %d :", x+1);
        for (int y = 0; y < 5; y++)
            scanf("%d", &array[x][y]);
    }

    printf("\n");
    for (int x = 0; x < 5; x++)
    {
        printf("Average score of student %d :", x+1);
        sum = 0;
        for (int y = 0; y < 5; y++)
            sum += array[x][y];
        printf("%.2lf\n", (double) sum / 5);
    }

    for (int x = 0; x < 5; x++)
    {
        sum = 0; min = 100; max = 0;
        for (int y = 0; y < 5; y++)
        {
            max = array[y][x] > max ? array[y][x] : max;
            min = array[y][x] < min ? array[y][x] : min;
            sum += array[y][x];
        }
        printf("\nQuiz %d\n", x+1);
        printf("Average Score: %.2lf\n", (double) sum / 5);
        printf("Highest score: %d\n", max);
        printf("Lowest score: %d\n", min);
    }

    return 0;
}