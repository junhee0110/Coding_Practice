// File name: ex9_2.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 2

#include <stdio.h>

int check(int, int, int);

int main(void)
{
    printf("%d\n", check(1,2,3));
    printf("%d\n", check(1,2,2));

    return 0;
}

int check(int x, int y, int n)
{
    return x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1 ? 1 : 0;
}
