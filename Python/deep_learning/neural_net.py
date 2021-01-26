import numpy as np

class neural_net:
    def __init__(self,input,hidden,output,weigth_init):
        pass


def gradient(f,x):
    grad = np.zeros_like(x)
    h= 0.0001
    for idx in range(x.size):
        x_temp = x[idx]
        x[idx] = x_temp + h
        fx_p = f(x)

        x[idx] =  x_temp - h
        fx_m = f(x)

        grad[idx] = (fx_p-fx_m)/(2*h)
        x[idx]= x_temp

    
    return grad

def gradient_descent(f, init_x, lr=0.01, step_num=100):
    x = init_x
    for i in range(step_num):
        grad = gradient(f,x)
        x = x - lr * grad

    return x

def f(X):
    return X[0]**2 + X[1]**2

X = np.array([2.,3.])

print(f(X))

X = gradient_descent(f,X,0.01)

print(f(X))