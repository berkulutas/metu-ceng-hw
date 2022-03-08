import math

def sigmoid_clipped(x):
    if x <= -700:
        return 0
    if -700<x<700:
        return 1/(1+math.exp(-x))
    if x >= 700:
        return 1

def relu(x):
    return max(0,x)

def isEqual(f1,f2):
    if abs(f1-f2) <1e-6: return True
    else: return False
