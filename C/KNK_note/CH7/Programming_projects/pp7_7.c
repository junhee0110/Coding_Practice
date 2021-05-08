// File name: pp7_7.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int denom1, num1, denom2, num2, result_denom, result_num;
    char op;

    printf("Enter tow fractions separated by a plus sign: ");
    scanf("%d / %d %c %d / %d",&num1, &denom1, &op, &num2, &denom2);
    
    switch (op)
    {
        case '+':
            result_denom = denom1 * denom2;
            result_num = denom1 * num2 + denom2 * num1;
            break;

        case '-':
            result_denom = denom1 * denom2;
            result_num = denom2 * num1 - denom1 * num2;
            break;

        case '*':
            result_denom = denom1 * denom2;
            result_num = num1 * num2;
            break;

        case '/':
            result_denom = denom1 * num2;
            result_num = num1 * denom2;
            break;

        default: printf("Wrong operator\n"); return 0;
    }

    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}