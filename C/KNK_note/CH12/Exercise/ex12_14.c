#include <stdio.h>
#include <stdbool.h>

bool search(const int *, int, int);

int main(void)
{
    int temperature[7][24] = {0};

    for (int i = 0; i < 7; i++)
    {
        if (search(temperature[i], 24, 32))
        {
            printf("32 is in array\n");
            return 0;
        }
    }

    printf("32 is not in array\n");

    return 0;
}

// -------------------------------------------------
//  name: search
//  purpose: return ture if key matches some element of a
//  parameters:
//      a - array to search
//      n - length of array
//      key - search key
// -------------------------------------------------

bool search(const int *a, int n, int key)
{
    for (int *p = a; p < a + n; p++)
        if (*p == key)
            return true;

    return false;
}