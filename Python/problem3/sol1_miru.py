number = int(input("2진수로 바꿀 숫자 입력"))

i = 0

while (number-2**i) >= 0:#자릿수 결정
    i=i+1

p=i

while p>=1:#자릿수만큼 실행
    if number-2**(p-1) >= 0:
        print("1",end='')
        number -= 2**(p-1)

    else:
        print("0",end='')

    p=p-1