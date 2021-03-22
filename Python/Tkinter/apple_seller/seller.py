class Seller:
    def __init__(self, money, apple, price): # 생성자
        self.money = money # 돈
        self.apple = apple # 사과의 개수
        self.price = price # 사과의 가격

    def add(self, apple): # apple의 수만큼 사과를 추가함
        self.apple += apple

    def sell(self, buyer, count): # buyer에게 count만큼의 사과를 판매
        if self.apple >= count: # 남은 사과가 count보다 많다면
            if buyer.money >= (self.price * count): # buyer의 돈이 충분하다면
                buyer.money -= (self.price * count) # buyer의 돈에서 가격만큼 뺀다
                self.money += (self.price * count) # 자신의 돈은 가격만큼 더한다
                buyer.apple += count # buyer의 사과를 추가한다
                self.apple -= count # 자신의 사과를 뺀다.

    def show_status(self):
        print("MONEY :", self.money)
        print("APPLE :", self.apple)
        print("PRICE :", self.price)