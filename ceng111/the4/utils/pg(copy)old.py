from tree import *
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
#'DEPARTED ismet',
#'DEPARTED lutfi',
"DEPARTED faika",
"DEPARTED giray",
"MARRIED mert ayse",
"DEPARTED kaan"
]

tree, marriedwith, deads = tree(Descriptions)

def pg_finder(person):
    pg = []
    # first pg
    children = children_finder(person)
    for child in children:
        if child not in deads:
            pg = [1, children]

    # second pg
    if pg == []:
        parents = parents_finder(person)
        if parents != None:
            for parent in parents:
                if parent not in deads:
                    pg = [2, parents]

    # third pg
    if pg == []:
        gparents = gparents_finder(person)
        if parents != None:
            for gplist in gparents:
                for gp in gplist:
                    if gp not in deads:
                        pg = [3, gparents]

    return pg

def children_finder(person):
    children = []
    for k,v in tree.items():
        if person in v:
            children.append(k)
    return children

def parents_finder(person):
    try:
        parents = tree[person]
    except:
        parents = None
    return parents

def gparents_finder(person):
    gparents = []
    try:
        for i in parents_finder(person):
            gparents += (parents_finder(i))
    except:
        gparents = None
    return gparents
# print(gparents_finder('giray'))
# print(pg_finder('jale'))
