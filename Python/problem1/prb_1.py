'''
문제 1번. 
(1) 사용자에게 등차수열의 첫 항과 공차를 입력받아 일반항을 출력하는 함수를 만드시오 (print 사용)
(2) 항 번호를 추가로 입력받아 n번째 항까지의 수열의 합을 구하여 출력는 함수를 만드시오 (return 사용) 

sol 1)
(1) 수학적인 방법으로 pn + q의 일반항에서 p = d, q = a -p 라는 사실을 도출
=> print 문에 직접 대입하여 출력한다

(2) for 문을 이용 (n회 반복) = > 일반항에 대입하여 계속 더해줌
'''

def get_general_term(a,d):
	#let general_term is pn+q
	#then, p = d and q = a - p = a - d
	
	print("general term : {0}n + {1}".format(d,a-d))

	return

def sigma_seq(a,d,n): # a is first term, d is common difference, n is number of term
	result = 0
	for x in range(1,n+1):
		result += (d*x + a - d)

	return result


a = int(input("첫 항을 입력하세요 : "))
d = int(input("공차를 입력하세요 : "))
n = int(input("몇 번째 항까지 더할까요? : "))

get_general_term(a,d)
print("{}번째 항까지의 합은 {}입니다".format(n,sigma_seq(a,d,n)))

"""
알아두면 좋은 것 : print문에 "" 내부에 {}를 넣고 .format()을 사용하면 변수를 문장과 섞어서 출력가능

EX)
a= 5
b= 3

print("{0} * {1} = {2}".format(a,b,a*b))
=> 5 * 3 = 15 출력
{} 안에 있는 수는 format함수 괄호 안에 있는 숫자의 인덱스
"""