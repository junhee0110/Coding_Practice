// File name: pp7_10.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 10

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int value = 0;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n')
    {
        switch(toupper(c))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                value += 1;
            default: break;
        }
    }

    printf("Your sentence contains %d vowels.\n", value);

    return 0;
    
}