/*
40개의 수를 가지는 배열을 이용하는 HugeInteger class를 만들어라.
멤버 함수로 input, output, add, subtract을 만들어라
HugeInteger 객체를 비교하기 위해, isEqualTo, isNotEqualTo, isGreaterThan, isLessThan, isGreaterThanOrEqualTo, isLessThanOrEqualTo 함수를 만들어라
각 함수는 Bool을 반환한다.
isZero함수를 만들어라
가능하다면, 멤버함수로 multiply, divide, remainder을 만들어라
*/

#include "Hugeint.h"

void HugeInteger::input(){
    char num[40] ={0,};
    std::cout<<"수를 입력 :";
    fgets(num,41,stdin);//자동으로 null 삽입되므로 한칸 여유있게
    for(int x = 0; x<40;x++){
        if(num[x]=='\n'){
            n=x;
            break;
        }
        else if(x==39){
            n=40;
            while(getchar()!='\n');
        }
    }

    for(int k = 0;k<n;k++){
        digit[k]=(int)num[n-k-1]-48;
    }

}

void HugeInteger::output(){
    for(int p = n-1; p>=0;p--){
        std::cout<<digit[p];
        
    }
}

void HugeInteger::add(HugeInteger &A){
    for(int x=0 ; x<40 ; x++){
        int temp_sum = A.digit[x] + digit[x];
        if(temp_sum >= 10){
            if(x!=39)
                digit[x+1]++;
            digit[x]=temp_sum-10;
        }
        else digit[x] =  temp_sum; 

        if(n!= 40 && digit[n]>0)
            n++;
    }
    
}

void HugeInteger::subtract(HugeInteger &A){
    if(n<40 && A.digit[n]>0){ //빼는 수의 자리수가 더 클 때는 0이 됨
        for(int x = 0; x<40; x++){
            digit[x]=0;
            n = 0;
            return;
        }
    }

    for(int x=0 ; x<40 ; x++){
        int temp_sum = digit[x] - A.digit[x];
        if(temp_sum < 0){
            if(x!=39){
                digit[x+1]--;
                digit[x]=temp_sum+10;}
            else{
                for(int x = 0; x<40; x++){
                digit[x]=0;
                n=0;
                return;
                }
            }

        }
        else digit[x] =  temp_sum; 

    }
    
    for(int x = n-1; x>=1; x--){
        if(digit[x]!=0){
            n = x+1;
        }
    }

}

bool isEqualTo(HugeInteger &A, HugeInteger &B){
    for(int x = 0; x<40 ; x++){
        if(A.digit_ptr[x] != B.digit_ptr[x])
            return false;
    }
    return true;
}

bool isNotEqualTo(HugeInteger &A, HugeInteger &B){
    return !isEqualTo(A,B);
}

bool isGreaterThan(HugeInteger &A, HugeInteger &B){
    
    for(int x = 39; x>=0 ; x--){
        if(A.digit_ptr[x]>B.digit_ptr[x])
            return true;
        else if(A.digit_ptr[x]<B.digit_ptr[x])
            return false;
        else continue;
    }
    return false;
}
bool isGreaterThanOrEqualTo(HugeInteger &A, HugeInteger &B){
    for(int x = 39; x>=0 ; x--){
        if(A.digit_ptr[x]>B.digit_ptr[x])
            return true;
        else if(A.digit_ptr[x]<B.digit_ptr[x])
            return false;
        else continue;
    }
    
    return true;
    
}

bool isLessThan(HugeInteger &A, HugeInteger &B){
    return !isGreaterThanOrEqualTo(A,B);
}

bool isLessThanOrEqualTo(HugeInteger &A, HugeInteger &B){
    return !isGreaterThan(A,B);
}

bool isZero(HugeInteger &A){
    for(int x = 0; x<40 ; x++){
        if(A.digit_ptr[x] != 0)
            return false;
    }
    return true;
}