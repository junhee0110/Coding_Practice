#include <stdio.h>

int find_largest(int *, int);

int main(void)
{
    int temperature[7][24] = {{32, 22}, {2,3}};
    
    for (int (*p)[24] = temperature; p < temperature + 7; p++)
        printf("Max: %d\n", find_largest(*p, 24));

    return 0;
}

int find_largest(int *a, int n)
{
    int max = *a;
    for (int *p = a; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}