// File name: ex11_4.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 4

#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int i = 0, j = 1;
    printf("Before: %d %d\n", i, j);
    swap(&i, &j);
    printf("After: %d %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}