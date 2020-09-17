#include <stdio.h>

int main(){

    FILE * file1 = fopen("text1.txt","wt");
    if(file1==NULL){
        puts("파일 오픈 실패");
        return -1;
    }

    char str1[50];

    fgets(str1, sizeof(str1), stdin);

    fputs(str1,file1);
    fputs("안녕하세요",file1);
    fputs("반갑습니다",file1);

    fclose(file1);

    return 0;
}