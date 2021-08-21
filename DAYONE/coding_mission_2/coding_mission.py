#가위바위보 프로그램
#프로그램이 최대한 높은 승률을 기록하도록
#매 경기 승패여부 출력&기록

from winrate import WinRate
from RSP import BayesianRSP
import os

def display_round(win_rate, lose_rate, round, my_rsp, com_rsp):
    rsp_display = {'r' : "바위" , 's' : "가위", 'p' : "보"}
    print(" YOU("+str(win_rate)+"%)"+ "%-2s" % rsp_display[my_rsp] +"                               "+"Round","%4d" % round,"                                      "+"%2s" % rsp_display[com_rsp]+"("+str(lose_rate)+"%)COM")
    print("+ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ+")
    print(" " + "|"*int(win_rate) + " "*(100 - int(win_rate) - int(lose_rate)) + "|"*int(lose_rate))
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
    print("가위바위보를 시작합니다\n")
    while True:
        entered_rsp = valid_input("\n가위바위보 중 하나를 입력해주세요: ", ['r', 's', 'p', '-1'])
        if entered_rsp == '-1':
            break
        if os.name == 'nt':
            os.system('cls')
        elif os.name == 'posix':
            os.system('clear')

        outcome = RSP.play(entered_rsp)
        winrate.game_record(outcome)

        winner = {0 : "이겼습니다!\n" ,1 : "졌습니다.\n" , 2 : "비겼습니다.\n" }[outcome]
        print(f'{winner}')
        print("컴퓨터의 예측\n가위 : {}, 바위 : {}, 보 : {}\n".format(round(RSP.counter_predict[0], 2), round(RSP.counter_predict[1], 2),round(RSP.counter_predict[2], 2)))

        display_round(win_rate=winrate.get_WinRate(), round = RSP.play_time, lose_rate = winrate.get_LoseRate(), my_rsp=entered_rsp, com_rsp=RSP.RSP_word[RSP.my_RSP])

    print("프로그램을 종료합니다")
    quit()

if __name__ == "__main__":
    try:
        main()
    except:
        exit()