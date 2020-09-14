a, b=input("숫자 두개를 입력하시오 : ").split(',')
a=int(a)
b=int(b)
c, d=input("숫자 두개를 입력하시오 : ").split(',')
c=int(c)
d=int(d)

denom=b*d
num=a*d+b*c
tmp=1

print(a,end='')
print('/',end='')
print(b,end='')
print('+',end='')
print(c,end='')
print('/',end='')
print(d)

while num%denom!=0: #유클리드 호제법 이용 최대공약수 구하기 => tmp
    tmp=num%denom
    num=denom
    denom=tmp

print(int((a*d+b*c)/tmp),end='')
print('/',end='')
print(int((b*d)/tmp))

