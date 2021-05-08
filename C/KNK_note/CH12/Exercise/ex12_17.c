#include <stdio.h>
#define LEN 5

int sum_two_dimensional_array(const int [][LEN], int);

int main(void)
{
    int arr[2][LEN] = {{1,2,3,4,5}, {6,7,8,9,10}};

    printf("Sum: %d\n", sum_two_dimensional_array(arr, 2));

    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0;

    for (int *p = a[0]; p < a[0] + LEN * n; p++)
        sum += *p;

    return sum;
}