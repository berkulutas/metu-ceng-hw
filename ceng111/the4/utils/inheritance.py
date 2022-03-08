from tree import *
from pg import *
from persons import *
from spouse import *

def inheritance(example):
    global tree, marriedwith, deads
    tree, marriedwith, deads = tree_maker(example)
    heirs_with_heritage = {}
    result = []
    for i in example:
        i = i.split(' ')
        if i[0] == 'DECEASED':
            person = i[1]
            heritage = int(i[2])
            heirs = heirs_finder(person)
            for heir in heirs:
                heirs_with_heritage[heir[0]] = heir[1]*heritage  #heirs_with_heritage.append((heir[0], heir[1]*heritage))
    for k,v in heirs_with_heritage.items():
        result.append((k,v))
    return result

Example1 = Descriptions + ["DECEASED mert 100"] # First PG
Example2 = Descriptions + ["DECEASED enes 120"] # Second PG
Example3 = Descriptions + ["DECEASED giray 480"] # Third PG

print(inheritance(Example1))
print(inheritance(Example2))
print(inheritance(Example3))
