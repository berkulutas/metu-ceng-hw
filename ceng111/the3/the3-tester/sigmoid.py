import math
def sigmoid(layer):
    newlayer = []
    for a in layer:
        if a <= -700:
            newa = 0
        if -700 < a < 700:
            newa = 1/(1+math.exp(-a))
        if 700 <= a:
            newa = 1
        newlayer.append(newa)
    return newlayer


layer = [-1000,-800,-701, -100,-10, 0, 10 ,100, 500,701, 800,1000]

print(sigmoid(layer))
