// File name: pp8_17.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 17

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            square[i][j] = 0;
    }

    for (int i = 1, row = 0, col = (n - 1) / 2, row_n, col_n; i <= n * n; i++)
    {
        square[row][col] = i;
        row_n = row - 1 < 0 ? n - 1 : row - 1;
        col_n = col + 1 >= n ? 0 : col + 1;

        if (square[row_n][col_n] != 0)
            row = row + 1 >= n ? 0 : row + 1;

        else
        {
            row = row_n;
            col = col_n;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", square[i][j]);

        printf("\n");
    }

    return 0;
}