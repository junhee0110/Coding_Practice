#include <stdio.h>
#include <stdbool.h>

bool search(const int *, int, int);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5}, input;

    printf("Enter a key: "); scanf("%d", &input);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    if (search(arr, 5, input))
        printf("%d is in array\n", input);
    else
        printf("%d is not in array\n", input);
    
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