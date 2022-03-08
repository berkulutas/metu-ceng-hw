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

network = [['lin1',[1,2,3,4,5]],'sig1','relu1',['lin2',[6,7,8,9,10]],'relu2','sig2']

for n in network:
    if type(n) == list:
        print(n[1])
    elif n.startswith('si'):
        print('start with si', n )
    elif n.startswith('re'):
        print('stat with re', n)
