// File name: pp3_6.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 5

#include <stdio.h>

int main(void)
{
    int one_one, one_two, one_three, one_four;
    int two_one, two_two, two_three, two_four;
    int three_one, three_two, three_three, three_four;
    int four_one, four_two, four_three, four_four;

    printf("Enter the numbers from 1 to 16 in any order :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &one_one, &one_two, &one_three, &one_four,
    &two_one, &two_two, &two_three, &two_four,
    &three_one, &three_two, &three_three, &three_four,
    &four_one, &four_two, &four_three, &four_four);

    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n",
    one_one, one_two, one_three, one_four,
    two_one, two_two, two_three, two_four,
    three_one, three_two, three_three, three_four,
    four_one, four_two, four_three, four_four);

    printf("Row sums : %d %d %d %d\n",
    one_one + one_two + one_three + one_four,
    two_one + two_two + two_three + two_four,
    three_one + three_two + three_three + three_four,
    four_one + four_two + four_three + four_four);

    printf("Column sums : %d %d %d %d\n",
    one_one  + two_one + three_one + four_one,
    one_two + two_two + three_two + four_two,
    one_three + two_three + three_three + four_three,
    one_four + two_four + three_four + four_four);

    printf("Diagonal sums : %d %d\n",
    one_one + two_two + three_three + four_four,
    one_four + two_three + three_two + four_one);

    return 0;

}