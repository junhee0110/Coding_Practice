// File name: pp8_16.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 16

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int isUsed[26] = {0}, i;
    char c;

    printf("Enter first word: ");
    while((c = tolower(getchar())) != '\n')
    {
        if (c >= 'a' && c <= 'z')
            isUsed[c - 'a']++;
    }

    printf("Enter second word: ");
    while((c = tolower(getchar())) != '\n')
    {
        if (c >= 'a' && c <= 'z')
            isUsed[c - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (isUsed[i] != 0)
            break;
    }

    if (i == 26)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}