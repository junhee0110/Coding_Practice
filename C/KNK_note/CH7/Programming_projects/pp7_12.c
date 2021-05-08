// File name: pp7_12.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 12

#include <stdio.h>

int main(void)
{
    double result, num;
    char op;

    printf("Enter a expression: ");

    scanf("%lf", &result);
    while ((op = getchar()) != '\n')
    {
        scanf("%lf", &num);
        switch (op)
        {
            case '+': result += num; break;
            case '*': result *= num; break;
            case '-': result -= num; break;
            case '/': result /= num; break;
            default: break;
        }
    }

    printf("Value of expression: %lg\n", result);

    return 0;    
}