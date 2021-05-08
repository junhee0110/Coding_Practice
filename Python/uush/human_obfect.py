class Human:
    def __init__(self, money = None):
        self.money = money

    def send_money(self, sendTo, money):
        if self.money >= money:
            self.money -= money
            sendTo.money += money


    def get_money(self, getFrom, money):
        if getFrom.money >= money:
            getFrom.money -= money
            self.money += money
