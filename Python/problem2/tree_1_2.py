'''
층수를 입력받아 다음과 같이 출력

5층
*
**
***
****
*****

=>함수로 구현~~~~~

sol) n층에서는 n개의 *이 출력됨
'''
def draw_tree(n):
    for x in range(n):
        for y in range(x):
            print("*",end='')
        print("*")

    

n = int(input("몇 층을 쌓을까요??  :  "))
draw_tree(n)