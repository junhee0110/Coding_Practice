#include <stdio.h>

#define N 10

int main(void)
{
    double ident[N][N];
    
    for (double *p = ident[0]; p < ident[0] + N * N; p++)
    {
        if ((p - ident[0]) % (N+1) == 0)
            *p = 1.0;
        else
            *p = 0.0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%lg ", ident[i][j]);
        putchar('\n');
    }

    return 0;
}