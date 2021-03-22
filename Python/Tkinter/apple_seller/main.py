import tkinter as tk
import login
import buyer_gui as bg
import seller_gul as sg

def main(): #main 함수

    # 창 설정
    window = tk.Tk() # 창 생성
    window.geometry("400x300+100+100") # 창 크기는 400x300 100, 100 위치에 창 생성
    window.resizable(False, False) # 크기 조절 불가
    window.title("연습용 프로그램") # 창 이름은 "연습용 프로그램"

    # Buyer, Seller 객체 생성
    # 객체를 더 만들거나, 수정하면서 결과를 확인해보세요!
    buyer1 = bg.Buy_GUI(window, 5000) # 5000원을 가진 buyer1 객체 (Buy_GUI의 인스턴스)
    seller1 = sg.Sell_GUI(window, 5000, 50, 500) #5000원, 사과 50개, 개당 500원인 seller1 객체 (Sell_GUI의 인스턴스)

    buyer1.place_widget(row = 0, column = 0) # buyer1을 (0,0) 위치에 배치
    seller1.place_widget(row = 0, column = 1) # seller1을 (0,1) 위치에 배치

    #buyer2, seller2, buyer3, seller3도 같음
    buyer2 = bg.Buy_GUI(window, 500000)
    seller2 = sg.Sell_GUI(window, 5000, 50, 500)

    buyer2.place_widget(row = 1, column = 0)
    seller2.place_widget(row = 1, column = 1)

    buyer3 = bg.Buy_GUI(window, 50000)
    seller3 = sg.Sell_GUI(window, 500, 500, 700)

    buyer3.place_widget(row = 2, column = 0)
    seller3.place_widget(row = 2, column = 1)

    # 각 Buyer마다 Seller를 지정. 즉, 누구한테 살 지 결정
    # 이 부분을 수정하면서 결과를 확인해보세요!
    buyer1.set_seller(seller1) # buyer1에게 사과를 판매할 객체를 선택
    buyer2.set_seller(seller2) # buyer2에게 사과를 판매할 객체를 선택
    buyer3.set_seller(seller3) # buyer3에게 사과를 판매할 객체를 선택

    #mainloop를 시작
    window.mainloop()

# 이런식으로 해두면 import한게 아니고 main.py를 실행한 경우에만 main 함수가 작동함
if __name__ == '__main__': 
    main()