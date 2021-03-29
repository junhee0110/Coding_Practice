import human_obfect as h

class Buyer(h.Human):
    def __init__(self, money):
        h.Human.__init__(self, money)
        self.apple = 0

    def buy_apple(self, apple, fromWho):
        if fromWho.apple >= apple:
            if self.money >= (apple * fromWho.price):
                self.send_money(fromWho, apple * fromWho.price)
                self.apple += apple
                fromWho.apple -= apple

    def eat_apple(self):
        if self.apple > 0:
            self.apple -= 1

    def earn_money(self, money):
        self.money += money