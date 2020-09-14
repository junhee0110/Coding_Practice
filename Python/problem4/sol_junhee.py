def getCommonFac(n1,n2): #공약수 리스트를 얻는 함수
    temp=[]
    if n1<=n2:#작은수보다 작거나 같은 수를 나눠서 떨어지는 x를 기록
        for x in range(0,n1):
            if n1%(x+1) == 0 and n2%(x+1) == 0:
                temp.append(x+1)
    else:
        for x in range(0,n2):
            if n1%(x+1) == 0 and n2%(x+1) == 0:
                temp.append(x+1)
    return temp

while 1:
    num1,num2 = input("첫 숫자열을 입력하세요 ").split(',')
    num3,num4 = input("두번째  숫자열을 입력하세요 ").split(',')
    num1=int(num1)
    num2=int(num2)
    num3=int(num3)
    num4=int(num4)
    print("\n")
    print("%d/%d + %d/%d"%(num1,num2,num3,num4))#입력받은 대로 출력
    print("= %d/%d + %d/%d"%(num1*num4,num2*num4,num2*num3,num2*num4))
    #통분한 뒤 출력
    up=num1*num4 + num2*num3 #분자
    down=num2*num4 #분모
    print("= %d/%d"%(up,down))#통분후 계산값
    coFa=getCommonFac(up,down)#공약수 리스트 가져옴
    mulcoFa=coFa[len(coFa)-1]#공약수 중 가장 큰 값을 저장(최대공약수)

    if mulcoFa != 1:#최대공약수가 1이면 약분 생략

        if up==down:#1은 정수로 출력
            print("= 1")
        else:#최대공약수를 나눠서 결과 출력
            print("= %d/%d"%(int(up/mulcoFa),int(down/mulcoFa)))
