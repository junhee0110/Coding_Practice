// File name: pp10_1.c
// Author: Lee Junhee
// Chapter : 10
// Problem : 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// External variables
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);

int main()
{
    char c;
    bool result = true;

    printf("Enter parentheses and/or braces: ");
    while((c = getchar()) != '\n')
    {
        if (c == '(' || c == '{')
            push(c);

        else if (c == ')')
        {
            if (pop() != '(')
            {
                result = false;
                break;
            }
        }

        else if(c == '}')
        {
            if (pop() != '{')
            {
                result = false;
                break;
            }
        }
    }

    if (! is_empty())
        result = false;

    if(result)
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_overflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}