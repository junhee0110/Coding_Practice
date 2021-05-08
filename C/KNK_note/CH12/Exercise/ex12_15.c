#include <stdio.h>

int main(void)
{
    int temperature[7][24] = {{32}, {2323}};
    int i = 0;

    for (int (*p)[24] = temperature; p < temperature + 7; p++)
        printf("%d\n", *p[i]);

    return 0;
}