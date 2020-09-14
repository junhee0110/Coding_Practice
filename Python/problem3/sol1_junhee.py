def binary(n):
    binary = []#결과 저장용 리스트
    temp = n#연산용 임시 변수
    result=[]#최종 결과
    while temp>1:
        binary.append(temp%2)
        temp = temp//2
    binary.append(temp)

    for x in range(0,len(binary)):#binary의 값을 뒤집어서 temp에 저장
        result.append(binary[len(binary) -1 - x])
    return result

def ListToStr(list):
    string=str(list)
    string = string.replace("[",'')
    string = string.replace("]","")
    string = string.replace(" ","")
    string = string.split(",")
    string = ''.join(string)

    return string

while 1:

    inpu = input("10진수를 입력: ")
    if inpu == '':
        break
    else:
        inpu = int(inpu)
        print("{}를 2진수로 전환하면 {}\n".format(inpu,ListToStr(binary(inpu))))
