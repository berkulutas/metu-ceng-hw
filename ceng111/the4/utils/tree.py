Descriptions = [
"CHILD jale giray kaan",
"CHILD faika enes giray",
"CHILD banu ali enes",
"CHILD ahu ali halil mert",
"CHILD dilek celil faika",
"CHILD ayse mert ismet lutfi",
"MARRIED giray jale",
"MARRIED faika enes",
"MARRIED ali banu",
"MARRIED celil dilek",
"DEPARTED ali",
"DEPARTED mert",
"DEPARTED enes",
"DEPARTED faika",
"DEPARTED giray",
"DEPARTED kaan",
"MARRIED mert ayse",
"DECEASED mert 100"
]
Example1 = Descriptions + ["DECEASED mert 100"] # First PG
def tree_maker(Descriptions):
    tree = {}
    marriedwith = {}
    deads = []
    for i in Descriptions:
        i = i.split(' ')

        if i[0] == 'CHILD':
            m, d, c = i[1], i[2], i[3:]
            for child in c:
                tree[child] = [m, d]

        if i[0] == 'MARRIED':
            marriedwith[i[1]] = i[2]
            marriedwith[i[2]] = i[1]

        if i[0] == 'DEPARTED' or i[0] == 'DECEASED' :
            deads.append(i[1])

    return tree, marriedwith, deads
# print(tree_maker(Example1))
