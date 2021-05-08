// File name: pp8_7.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int array[5][5], row_sum, col_sum;

    for (int x = 0; x < 5; x++)
    {
        printf("Enter row %d: ", x+1);
        for (int y = 0; y < 5; y++)
            scanf("%d", &array[x][y]);
    }

    printf("\nRow totals: ");
    for (int x = 0; x < 5; x++)
    {
        row_sum = 0;
        for (int y = 0; y < 5; y++)
            row_sum += array[x][y];

        printf("%d ", row_sum);
    }

    printf("\nColumn totals: ");
    for (int x = 0; x < 5; x++)
    {
        col_sum = 0;
        for (int y = 0; y < 5; y++)
            col_sum += array[y][x];

        printf("%d ", col_sum);
    }
    printf("\n");

    return 0;
}