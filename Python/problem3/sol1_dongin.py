jinsu=[] #2진수 저장 리스트

num=int(input('정수를 입력하세요 : ')) #정수 저장 변수
num2=num #정수 임시 저장, 연산용

while int(num/2)!=0: #정수값이 1혹은 2일시 반복문 종료
    if num%2==0:     # 짝수일경우
        jinsu=jinsu+[0]
    else:            # 짝수가 아닐경우 즉 홀수 일 경우
        jinsu=jinsu+[1]
    num=int(num/2)

jinsu=jinsu+[1]

print(num2,'는 2진법 으로 ',end='')
for i in range(len(jinsu)):     #메소드를 이용하지 않은 방법
    print(jinsu[-(i+1)],end='')
print(' 입니다')

print(num2,'는 2진법 으로 ',end='')
jinsu.reverse()    #리스트를 뒤집는 메소드를 이용한 방법
for i in jinsu:
    print(i,end='')
print(' 입니다')

input('계속하시려면 입력하세요.') #프로그램을 나가지 않고 대기