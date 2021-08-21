class WinRate:
    def __init__(self):
        self.record = [0, 0, 0]

    def game_record(self, result):
        self.record[result] += 1

    def get_WinRate(self):
        return round(self.record[0] / sum(self.record) * 100 ,1)