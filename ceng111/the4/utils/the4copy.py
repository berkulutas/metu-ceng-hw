def spouse_finder(person):
    try:
        spouse = marriedwith[person]
    except:
        spouse = None
    return spouse

def heirs_finder(person):
    heirs = []
    pg = pg_finder(person)
    spouse = spouse_finder(person)
    if not isdead(spouse) and pg != []:
        if pg[1] == 1:
            heirs.append((spouse, 0.25))
            heirs += share_finder(pg[0], 0.75)
        if pg[1] == 2:
            heirs.append((spouse, 0.5))
            heirs += share_finder(pg[0], 0.5)
        if pg[1] == 3:
            heirs.append((spouse, 0.75))
            heirs += share_finder(pg[0], 0.25)
    if not isdead(spouse) and pg == []:
        heirs.append((spouse, 1))
    if isdead(spouse) and pg != []:
        heirs += share_finder(pg[0], 1)
    return heirs

def share_finder(lst, share):
    shares = []
    for i in lst:
        if type(i) == str:
            shares.append((i,share/len(lst)))
        if type(i) == list:
            shares += share_finder(i, share/len(lst))
    return shares

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
    tree, marriedwith, deads = tree(Descriptions)
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
    tree, marriedwith, deads = tree(Descriptions)
    children = []
    for k,v in tree.items():
        if person in v:
            children.append(k)
    return children

def parents_finder(person):
    tree, marriedwith, deads = tree(Descriptions)
    try:
        parents = tree[person]
    except:
        parents = []
    return parents

def gparents_finder(person):
    tree, marriedwith, deads = tree(Descriptions)
    gparents = []
    try:
        for i in parents_finder(person):
            if parents_finder(i) != []:
                gparents += (parents_finder(i))
    except:
        gparents = []
    return gparents


def isdead(person):
    tree, marriedwith, deads = tree(Descriptions)
    return person in deads

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

def inheritance(example):
    heirs_with_heritage = []
    for i in example:
        i = i.split(' ')
        if i[0] == 'DECEASED':
            person = i[1]
            heritage = int(i[2])
            heirs = heirs_finder(person)
            for heir in heirs:
                heirs_with_heritage.append((heir[0], heir[1]*heritage))
    return heirs_with_heritage

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
"DEPARTED kaan"
]

Example1 = Descriptions + ["DECEASED mert 100"] # First PG
print(inheritance(Example1))
