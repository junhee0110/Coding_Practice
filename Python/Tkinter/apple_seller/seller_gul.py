import tkinter as tk
import seller as s

class Sell_GUI(tk.Frame, s.Seller): #Frame과 Seller 클래스를 상속
    def __init__(self, master, money, apple, price):
        tk.Frame.__init__(self, master) # Frame 생성자
        s.Seller.__init__(self, money, apple, price) # Seller 생성자

    def set_widget(self): # Frame 내부에 위젯을 배치
        # 맨 윗 줄 라벨
        self.apple_label = tk.Label(self, text = "사과")
        self.money_label = tk.Label(self, text = "돈")
        self.price_label = tk.Label(self, text = "가격")

        # textvariable 인수를 사용하려면 tk.StringVar 객체를 만들어야 함
        # 제가 이걸 몰랐네용.. 꼭 알아두기!
        self.money_str = tk.StringVar()
        self.apple_str = tk.StringVar()
        self.price_str = tk.StringVar()

        # 사과의 개수, 돈, 가격을 표시할 라벨, textvariable에 위에서 만든 tk.StringVar 객체를 전달한 것을 주목!
        self.apple_show = tk.Label(self, textvariable = self.apple_str)
        self.money_show = tk.Label(self, textvariable = self.money_str)
        self.price_show = tk.Label(self, textvariable = self.price_str)

        # 사과를 추가하는 버튼, command로 전달한 add_gui 매소드에 주목
        self.add_btn = tk.Button(self, text = "사과 1개 추가", command = self.add_gui)

        # StringVar의 값을 갱신하는 매소드, 아래를 참고
        self.update_text()

        # 각 위젯을 그리드 방식으로 배치
        self.apple_label.grid(row = 0, column = 0)
        self.money_label.grid(row = 0, column =1)
        self.price_label.grid(row = 0, column =2)
        self.apple_show.grid(row = 1, column = 0)
        self.money_show.grid(row = 1, column = 1)
        self.price_show.grid(row = 1, column  = 2)
        self.add_btn.grid(row = 2, column = 0, columnspan = 3)

    # Frame 객체를 master에 배치하는 매소드
    def place_widget(self, row, column):
        self.grid(row = row, column = column)
        self.set_widget()
    
    # StringVar 객체의 값을 갱신하는 매소드
    def update_text(self):
        # StringVar 객채의 set 매소드로 그 값을 갱신해야 함
        # 변수의 값이 바뀌어도, set 매소드로 갱신하지 않으면 Label의 텍스트가 바뀌지 않음
        self.apple_str.set(self.apple)
        self.money_str.set(self.money)
        self.price_str.set(self.price)
    
    # 부모 클래스의 add 매소드를 GUI에 맞게 사용
    # StringVar 객체의 값을 갱신해야 해서 불가피하게 만듦...
    def add_gui(self):
        self.add(1)
        self.update_text()