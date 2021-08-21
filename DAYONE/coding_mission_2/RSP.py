import random, abc

class BaseRSP(metaclass = abc.ABCMeta):

    @abc.abstractmethod
    def predict(self):
        pass

    @abc.abstractmethod
    def play(self, input):
        pass

    @abc.abstractmethod
    def chooseRSP(self):
        pass

class BayesianRSP(BaseRSP):
    def __init__(self, RSP_context, win_context, random_N = 10) -> None:
        
        # RSP record
        self.record = [
            [1, 1, 1],
            [1, 1, 1],
            [1, 1, 1]
        ]
        
        # Set translate context
        self.RSP_context = {}
        self.win_context = {}
        for x in range(len(RSP_context)):
            self.RSP_context[RSP_context[x]] = x
        self.RSP_word = RSP_context

        for x in range(len(win_context)):
            self.win_context[win_context[x]] = x
        self.win_word = win_context

        if random_N <= 0:
            raise Exception("random_N must be larger than 0!")
        self.play_time = 0
        self.random_N = random_N

        # Predict list
        self.counter_predict = [1/3, 1/3, 1/3]
        self.ex_RSP = 0 # Rock, exRSP of counter
        self.counter_RSP = 0 # Rock, predict nowRSP of counter
        self.my_RSP = 0 # Rock, nowRPS of mine

    # P ( now | ex ) = P ( ex | now ) * p ( now ) / P ( ex )
    def predict(self):
        if self.random_N > self.play_time:
            self.counter_RSP =  random.randint(0,2)
        else:
            for x in range(3):
                self.counter_predict[x] = self.record[self.ex_RSP][x] / sum(self.record[self.ex_RSP])

            self.counter_RSP = self.counter_predict.index(max(self.counter_predict))

    def chooseRSP(self):
        self.my_RSP = (self.counter_RSP -1) % 3

    def play(self, input):
        input_trans = self.RSP_context[input]
        self.predict()
        self.chooseRSP()
        result = (input_trans - self.my_RSP - 1) % 3
        self.record[self.ex_RSP][input_trans]+=1
        self.ex_RSP = input_trans
        self.play_time += 1
        return self.win_word[(result - 1) % 3]



if __name__ == '__main__':
    RSP_ = ['가위', '바위', '보']
    B = BayesianRSP(RSP_, ['승', '패', '무'])
    result_list = {'승' : 0, '패' : 0, '무' : 0}

    while True:
        print(B.play_time)
        result = B.play(input("가위바위보~"))
        result_list[result] += 1
        print(RSP_[B.my_RSP])
        print(result)
        print(B.record)
        print(B.ex_counter_predict)
        print(B.counter_predict)
        print(result_list['승'] / sum(result_list.values()) * 100)