#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
    char text[N], c;
    int i;

    printf("Enter a message: ");
    while((c = toupper(getchar())) != '\n' && i < 100)
    {
        if (c >= 'A' && c <= 'Z')
            text[i++] = c;
    }

    for (int x = 0, y = i - 1; x != y; x++, y--)
        if (text[x] != text[y])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    
    printf("Palindrome\n");
    
    return 0;
}