// File name: pp8_6.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 6

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[500] = {0};
    char c;

    printf("Enter message: ");
    for (int x = 0; (input[x] = getchar()) != '\n'; x++);

    for (int x = 0; input[x] != '\n'; x++)
    {
        c = toupper(input[x]);
        switch (c)
        {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", c);
                break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}