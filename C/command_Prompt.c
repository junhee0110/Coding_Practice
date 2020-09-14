#include <stdio.h>

int main(){

    int ch1 = getchar();
    int ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2,stdout);
    return 0;
    

}