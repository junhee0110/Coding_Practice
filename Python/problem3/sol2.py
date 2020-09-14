def ToDigit(n):
    temp = list(n)
    temp.reverse() #리스트를 뒤집어줌, 0자리가 맨 앞에 오도록
    result = 0

    for x in range(len(temp)):
        result = result + int(temp[x])*(2**x)#자릿수에 맞는 2의 제곱수를 더함

    return result


n = input("10진수로 바꿀 2진수를 입력하세요 : ")
print(n,"은 10진수로 {}".format(ToDigit(n)))