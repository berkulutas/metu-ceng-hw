from tree import *
from persons import *

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
Descriptions2 = [
'CHILD a x b',
'CHILD a x c',
'CHILD a x d',
'CHILD c y e',
'CHILD c y f',
'DEPARTED a',
'DEPARTED b',
'DEPARTED c',
#'DEPARTED f'
]





def pg_finder(person):
    tree, marriedwith, deads = tree_maker(Descriptions)
    pg = []
    # first pg
    pg = partaker_finder(person)
    if pg != []:
        pg = [pg] + [1]

    # second pg
    if pg == []:
        parents = parents_finder(person)
        for parent in parents:
            if isdead(parent):
                if partaker_finder(parent) != []:
                    pg.append(partaker_finder(parent))
            else:
                pg.append(parent)
        if pg != []:
            pg = [pg] + [2]
    # third pg
    if pg == []:
        gparents = gparents_finder(person)
        for gparent in gparents:
            if isdead(gparent):
                if partaker_finder(gparent) != []:
                    pg.append(partaker_finder(gparent))
            else:
                pg.append(gparent)
        if pg != []:
            pg = [pg] + [3]
    return pg

def partaker_finder(person):
    p = []
    # print(children_finder(person))
    children = children_finder(person)
    if not children:
        return []
    else:
        for child in children:
            if not isdead(child):
                p.append(child)
            else:
                if partaker_finder(child) != []:
                    p.append(partaker_finder(child))
        return p


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
        parents = []
    return parents

def gparents_finder(person):
    gparents = []
    try:
        for i in parents_finder(person):
            if parents_finder(i) != []:
                gparents += (parents_finder(i))
    except:
        gparents = []
    return gparents


def isdead(person):
    return person in deads

for person in persons:
    # print(f'{person} childs {children_finder(person)}')
    # print(f'{person} parents {parents_finder(person)}')
    # print(f'{person} gparents {gparents_finder(person)}')
    print(f'{person} s heirs = {pg_finder(person)}')
# print(partaker_finder('giray'))
# print(gparents_finder('giray'))
