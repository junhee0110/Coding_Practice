# 내장 함수인 eval() 함수를 사용해보겠습니다!
import os

def valid_choice(msg):
    command = input(msg).upper()
    while command != 'Y' and command != 'N':
        command = input("올바른 값을 입력하세요.\n"+msg).upper()
    
    return command

def main(cal_func):
    try:
        while True: # first loop -> calculate one cycle
            try:
                result = None
                while True: # second loop -> calculate one expression
                    if result == None:
                        expr = input("수식을 입력하세요 : ")
                        result = cal_func(expr)
                        print('= ' + str(result))

                    else:
                        expr = input("수식을 입력하세요 : " + str(result))
                        result = cal_func(str(result) + expr)
                        print('= ' + str(result))

                    if valid_choice("\n연산을 계속하시겠습니까? (Y/N) : ") == 'Y':
                        continue
                    else:
                        if os.name == 'nt':
                            os.system('cls')
                        elif os.name == 'posix':
                            os.system('clear')
                        break
            except KeyboardInterrupt:
                return

            except:
                input("올바른 수식을 입력하세요\n\n연산을 새로 시작합니다\n엔터를 누르세요.")
                if os.name == 'nt':
                    os.system('cls')
                elif os.name == 'posix':
                    os.system('clear')
                continue
            
            if (valid_choice("연산을 새로 시작하겠습니까? (Y/N) : ") == 'Y'):
                if os.name == 'nt':
                    os.system('cls')
                elif os.name == 'posix':
                    os.system('clear')
                print("연산을 새로 시작합니다.")
                continue
            else:
                return

    except:
        return

if __name__ == '__main__':
    main(eval)