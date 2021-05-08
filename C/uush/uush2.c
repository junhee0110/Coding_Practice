#include <stdio.h>

void HexToBin(int hex)
{
    int x = 0;
    for(x = 31 ; x >= 0 ; x--) //int 자료형은 32비트이므로 32자리만 출력하면 됨
    {
        if(hex >= (1 << x))
            {
                printf("1");
                hex -= (1<<x);
            }
            
        else
            printf("0");

        if(x%4 == 0)
            printf(" ");

        
    }
}

int main()
{
    int hex;

    printf("정수? ");
    scanf("%x", &hex);

    printf("16진수 %X: ", hex);
    HexToBin(hex);

    return 0;
}