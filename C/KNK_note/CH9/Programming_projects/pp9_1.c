// File name: pp9_1.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 1

#include <stdio.h>
#define N 10

void selection_sort(int [], int);
int find_largest_index(int [], int);

int main()
{
    int array[N];

    printf("Enter series of %d number: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);
        
    selection_sort(array, N);

    for (int i = 0; i < N; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}

int find_largest_index(int a[], int n)
{
    int max = a[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }

    return index;
}

void selection_sort(int a[], int n)
{
    int largest_i, temp;

    if (n > 1)
    {
        largest_i = find_largest_index(a, n);
        temp = a[n - 1];
        a[n - 1] = a[largest_i];
        a[largest_i] = temp;

        selection_sort(a, n -1);
    }
}

