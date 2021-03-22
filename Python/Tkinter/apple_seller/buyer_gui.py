import tkinter as tk
import buyer as b

class Buy_GUI(tk.Frame, b.Buyer): #Frame과 Buyer 클래스를 상속
    def __init__(self, master, money):
        tk.Frame.__init__(self, master) #Frame 생성자
        b.Buyer.__init__(self, money) # Buyer 생성자

    def set_widget(self): # Frame 내부에 위젯을 배치
        # 맨 윗 줄 라벨
        self.apple_label = tk.Label(self, text = "사과")
        self.money_label = tk.Label(self, text = "돈")

        # textvariable 인수를 사용하려면 tk.StringVar 객체를 만들어야 함
        # 제가 이걸 몰랐네용.. 꼭 알아두기!
        self.money_str = tk.StringVar()
        self.apple_str = tk.StringVar()

        # 사과의 개수, 돈을 표시할 라벨, textvariable에 위에서 만든 tk.StringVar 객체를 전달한 것을 주목!
        self.apple_show = tk.Label(self, textvariable = self.apple_str)
        self.money_show = tk.Label(self, textvariable = self.money_str)

        # StringVar의 값을 갱신하는 매소드, 아래를 참고
        self.update_text()

        # 사기, 먹기 버튼, command로 전달한 매소드에 주목
        self.buy_btn = tk.Button(self, text = "사기", command = self.buy_gui)
        self.eat_btn = tk.Button(self, text = "먹기", command = self.eat_gui)

        # 각 위젯을 그리드 방식으로 배치
        self.apple_label.grid(row = 0, column = 0)
        self.money_label.grid(row = 0, column =1)
        self.apple_show.grid(row = 1, column = 0)
        self.money_show.grid(row = 1, column = 1)
        self.buy_btn.grid(row = 2, column = 0)
        self.eat_btn.grid(row = 2, column = 1)

    # Frame 객체를 master에 배치하는 매소드
    def place_widget(self, row, column):
        self.grid(row = row, column = column)
        self.set_widget()

    # StringVar 객체의 값을 갱신하는 매소드
    def set_seller(self, seller):
        self.seller = seller

    def update_text(self):
        # StringVar 객채의 set 매소드로 그 값을 갱신해야 함
        # 변수의 값이 바뀌어도, set 매소드로 갱신하지 않으면 Label의 텍스트가 바뀌지 않음
        self.apple_str.set(self.apple)
        self.money_str.set(self.money)

    # 부모 클래스의 buy 매소드와 eat매소드를 GUI에 맞게 사용
    # StringVar 객체의 값을 갱신해야 해서 불가피하게 만듦...

    def buy_gui(self):
        self.buy(self.seller, 1)
        self.update_text()
        self.seller.update_text()

    def eat_gui(self):
        self.eat()
        self.update_text()