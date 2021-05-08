// File name: pp9_4.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 4

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int []);
bool equal_array(int [], int []);

int main()
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    if(equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[])
{
    char c;
    while((c = tolower(getchar())) != '\n')
    {
        if (c >= 'a' && c <= 'z')
            counts[c - 'a']++;
    }
}

bool equal_array(int counts1[], int counts2[])
{
    for (int i = 0; i < 26; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}