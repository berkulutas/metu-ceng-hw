def linear_layer(layer, weights):
    newlayer = []
    for weight in weights:
        newa = sum(list(map(lambda x,y: x*y, layer, weight)))
        newlayer.append(newa)
    return newlayer
layer = [1,2,3,4,5]
weights = [[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15]]

print(linear_layer(layer,weights))
