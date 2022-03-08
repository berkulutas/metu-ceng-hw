import math

def linear_layer(layer, weights):
    newlayer = []
    for weight in weights:
        newa = sum(list(map(lambda x,y: x*y, layer, weight)))
        newlayer.append(newa)
    return newlayer

def relu(layer):
    newlayer = []
    for a in layer:
        newa = max(0,a)
        newlayer.append(newa)
    return newlayer

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

def forward_pass(network,x):
    layer = x
    for n in network:
        if type(n) == list:
            layer = linear_layer(layer,n[1])
        elif n.startswith("sigmoid"):
            layer = sigmoid(layer)
        elif n.startswith("relu"):
            layer = relu(layer)
    return layer
