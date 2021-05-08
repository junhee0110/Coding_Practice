// File name: pp8_11.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 11

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c[15];

    printf("Enter phone number: ");

    for (int i = 0; i < 15; i++)
    {
        c[i] = toupper(getchar());
        switch(c[i])
        {
            case 'A': case 'B': case 'C': c[i] = '2'; break;
            case 'D': case 'E': case 'F': c[i] = '3'; break;
            case 'G': case 'H': case 'I': c[i] = '4'; break;
            case 'J': case 'K': case 'L': c[i] = '5'; break;
            case 'M': case 'N': case 'O': c[i] = '6'; break;
            case 'P': case 'R': case 'S': c[i] = '7'; break;
            case 'T': case 'U': case 'V': c[i] = '8'; break;
            case 'W': case 'X': case 'Y': c[i] = '9'; break;
            default: break;
        }
    }
    
    printf("In numeric form: ");
    for (int i = 0; i < 15; i++)
        putchar(c[i]);

    return 0;
}