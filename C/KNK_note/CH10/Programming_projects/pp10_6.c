// File name: pp10_6.c
// Author: Lee Junhee
// Chapter : 10
// Problem : 6

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// External variables
double contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(double i);
double pop(void);
void stack_overflow(void);
void stack_underflow(void);
double get_rpn(void);

int main(void)
{
    double result;
    for(;;)
    {
        printf("Enter an RPN expression: ");
        result = get_rpn();
        printf("value of expression: %lg\n", result);
    }
}

double get_rpn(void)
{
    char c;

    for(;;)
    {
        scanf(" %c", &c);
        if (c >= '0' && c <= '9')
            push(c - '0');
        else if (c == '+')
            push(pop() + pop());
        else if (c == '-')
            push(-pop() + pop());
        else if (c == '*')
            push(pop() * pop());
        else if (c == '/')
            push(1 / (pop() / pop()));
        else if (c == '=')
            return pop();
        else if (c == 'q' || c == 'Q')
            exit(EXIT_SUCCESS);
    }
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

void push(double i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

double pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}