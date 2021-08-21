#가위바위보 프로그램
#프로그램이 최대한 높은 승률을 기록하도록
#매 경기 승패여부 출력&기록

from winrate import WinRate
from RSP import BayesianRSP


def display_round(win_rate, round):
    print(" YOU("+str(win_rate)+"%)"+"                                "+"Round",round,"                                       "+"("+str(100-win_rate)+"%)COM")
    print("+ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ+")
    print(" "+"|"*int(win_rate))
    print("+ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ+")

def valid_input(msg, valid_answer):
    print(msg, end = '')
    while True:
        answer = input()
        if answer in valid_answer:
            return answer
        
        print("\n올바른 값을 입력하세요 : ", end = '')

RSP = BayesianRSP(['r' , 's', 'p'], [0, 1, 2], random_N=10)
winrate = WinRate()

def main():
    print("\n\n이 프로그램은 사용자와 프로그램이 가위바위보를 하는 프로그램입니다.")
    print("가위는 s,바위는 r, 보는 p를 입력하세요. 프로그램 종료를 위해서는 -1을 입력하세요")
    print("가위바위보를 시작합니다\n\n")
    while True:
        entered_rsp = valid_input("가위바위보 중 하나를 입력해주세요: ", ['r', 's', 'p', '-1'])
        if entered_rsp == '-1':
            break
        
        outcome = RSP.play(entered_rsp)
        winrate.game_record(outcome)

        winner = {0 : " you win\n\n" ,1 : " you lose\n\n" , 2 : " tied\n\n" }[outcome]
        print(f'{winner}')

        display_round(win_rate=winrate.get_WinRate(), round = RSP.play_time)

    print("프로그램을 종료합니다")
    quit()

if __name__ == "__main__":
    try:
        main()
    except:
        exit()
