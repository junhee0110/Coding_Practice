#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
    char text[N], c, *p = text;

    printf("Enter a message: ");
    while((c = toupper(getchar())) != '\n' && p < text + 100)
    {
        if (c >= 'A' && c <= 'Z')
            *(p++) = c;
    }

    for (char *x = text, *y = --p; x != y; x++, y--)
        if (*x != *y)
        {
            printf("Not a palindrome\n");
            return 0;
        }
    
    printf("Palindrome\n");
    
    return 0;
}