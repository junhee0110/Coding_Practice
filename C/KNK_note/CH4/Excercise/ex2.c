#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Enter i and j values (i,j) : ");
	scanf("%d , %d", &i, &j);

	printf("(-i) / j = %d\n -(i / j) = %d\n", (-i)/j, -(i/j));

	return 0;

}
