// File name: pp3_2.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item    \tUnit    \tPurchase\n");
    printf("        \tPrice   \tDate\n");
    printf("%-8d\t$%7.2f\t%d/%d/%d\n",item_num, unit_price, month,day,year);

    return 0;
}