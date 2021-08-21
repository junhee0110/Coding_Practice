# eval() 함수를 사용하지 않고 자체 연산 함수를 제작해서 사용해봅시다.

import coding_mission as c1

class Error(Exception):
    def __str__(self):
        return "수식 오류"

operator = ['+', '-', '*', '/', '^']

def my_cal(expr):
    num_list = []
    op_list = []
    ex_index = 0
    in_parent = False
    # parsing
    for x in range(len(expr)):
        if expr[x] in operator and not in_parent:
            num_list.append(expr[ex_index : x])
            op_list.append(expr[x])
            ex_index = x + 1
        elif expr[x] == '(':
            in_parent = True
        elif expr[x] == ')':
            in_parent = False
        if x == len(expr) - 1:
            num_list.append(expr[ex_index : len(expr)])

    # process parentheses
    for x in range(len(num_list)):
        if num_list[x][0] == '(':
            num_list[x] = str(my_cal(''.join(num_list[x][1:len(num_list[x])-1])))

    # check final expression
    if len(num_list) - len(op_list) != 1:
        raise Error

    for x in range(len(num_list)):
        num_list[x] = float(num_list[x])

    # final calculate
    # **, *, /
    while True:
        if not('^' in op_list or '*' in op_list or '/' in op_list):
            break
        for x in range(len(op_list)):
            if op_list[x] == '^':
                num_list[x] **= num_list[x+1]
            elif op_list[x] == '*':
                num_list[x] *= num_list[x+1]
            elif op_list[x] == '/':
                num_list[x] /= num_list[x+1]
    
            del num_list[x+1]
            del op_list[x]
            break
    
    while True:
        if len(op_list) == 0:
            return num_list[0]
    
        for x in range(len(op_list)):
            if op_list[x] == '+':
                num_list[x] += num_list[x+1]
            elif op_list[x] == '-':
                num_list[x] -= num_list[x+1]
    
            del num_list[x+1]
            del op_list[x]
            break


if __name__ == "__main__":
    c1.main(my_cal)