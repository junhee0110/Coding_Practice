import human_obfect as h

class Seller(h.Human):
    def __init__(self, money, apple, price):
        h.Human.__init__(self, money)
        self.apple = apple
        self.price = price

    def add_apple(self, apple):
        self.apple += apple

    def set_price(self, price):
        self.price = price