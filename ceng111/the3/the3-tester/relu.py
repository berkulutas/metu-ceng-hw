def relu(layer):
    newlayer = []
    for a in layer:
        newa = max(0,a)
        newlayer.append(newa)
    return newlayer

layer = [-5,-3,-2,0,1,4,7,8]

print(relu(layer))
