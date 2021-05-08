// File name: pp10_7.c
// Author: Lee Junhee
// Chapter : 10
// Problem : 7

#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

const bool segments[10][7] = {
{1, 1, 1, 1, 1, 1, 0}, // 0
{0, 1, 1, 0, 0, 0, 0}, // 1
{1, 1, 0, 1, 1, 0, 1}, // 2
{1, 1, 1, 1, 0, 0, 1}, // 3
{0, 1, 1, 0, 0, 1, 1}, // 4
{1, 0, 1, 1, 0, 1, 1}, // 5
{1, 0, 1, 1, 1, 1, 1}, // 6
{1, 1, 1, 0, 0, 0, 0}, // 7
{1, 1, 1, 1, 1, 1, 1}, // 8
{1, 1, 1, 1, 0, 1, 1}, // 9
};

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char c;

    clear_digits_array();

    printf("Enter a number: ");
    for (int i = 0; i < MAX_DIGITS;)
    {
        c = getchar();
        if (c >= '0' && c <= '9')
        {
            process_digit(c - '0', i);
            i++;
        }
        else if (c == '\n') break;
    }

    print_digits_array();

    return 0;
}

//-----------------------------------------------------
// name: clear_digits_array
// purpose: Set all elements of digits to one blank
//-----------------------------------------------------
void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}

//-----------------------------------------------------
// name: process_digit
// purpose: Store the seven-segment representation of
//          digit into a specified position position
//          in the digits array
// parameter:
//  digit - digits to store
//  position - position to store digit
//-----------------------------------------------------
void process_digit(int digit, int position)
{
    for (int x = 0; x < 7; x++)
    {
        switch(x)
        {
            case 0:
                digits[0][position * 4 + 1] 
                = segments[digit][0] ? '_' : ' '; 
                break;
            case 1:
                digits[1][position * 4 + 2] 
                = segments[digit][1] ? '|' : ' '; 
                break;
            case 2:
                digits[2][position * 4 + 2] 
                = segments[digit][2] ? '|' : ' '; 
                break;
            case 3:
                digits[2][position * 4 + 1] 
                = segments[digit][3] ? '_' : ' '; 
                break;
            case 4:
                digits[2][position * 4] 
                = segments[digit][4] ? '|' : ' '; 
                break;
            case 5:
                digits[1][position * 4] 
                = segments[digit][5] ? '|' : ' '; 
                break;
            case 6:
                digits[1][position * 4 + 1] 
                = segments[digit][6] ? '_' : ' '; 
                break;
        }
    }
}

//-----------------------------------------------------
// name: print_digits_array
// purpose: print digits array
//-----------------------------------------------------
void print_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        putchar('\n');
    }
}