// File name: pp9_5.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 5

#include <stdio.h>

void create_magic_square(int, char[*][*]);
void print_magic_square(int, char[*][*]);

int main(void)
{
    int n;

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char square[n][n];

    create_magic_square(n, square);

    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char square[n][n])
{
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
}

void print_magic_square(int n, char square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", square[i][j]);

        printf("\n");
    }
}