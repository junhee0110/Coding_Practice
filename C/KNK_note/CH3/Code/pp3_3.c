// File name: pp3_3.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 3

#include <stdio.h>

int main(void)
{
    int gs1, group, pub, item, check;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub, &item, &check);

    printf("GS1 Prefix : %d\n", gs1);
    printf("Group identifier : %d\n", group);
    printf("Publisher code : %d\n", pub);
    printf("Item number : %d\n", item);
    printf("Check digit : %d\n", check);

    return 0;
}