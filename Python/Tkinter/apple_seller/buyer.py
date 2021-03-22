class Buyer:
    def __init__(self, money): # 생성자
        self.money = money # 생성자에 전달된 만큼의 돈을 가지고 시작
        self.apple = 0 # 사과의 초기값은 0

    def eat(self):
        if self.apple > 0: # 사과가 있다면
            self.apple -= 1 # 사과를 먹음

    def buy(self, seller, count):
        seller.sell(self, count) # seller에게 count만큼의 사과를 판매요청

    def show_status(self):
        print("MONEY :", self.money)
        print("APPLE :", self.apple)

