from tree import *
from pg import *
from persons import *


def spouse_finder(person):
    try:
        spouse = marriedwith[person]
    except:
        spouse = []
    return spouse

def heirs_finder(person):
    heirs = []
    pg = pg_finder(person)
    spouse = spouse_finder(person)
    if spouse != []:
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
    if spouse == [] and pg != []:
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

# print(heirs_finder('giray'))


# for person in persons:
    # print(f'{person}s heirs = {heirs_finder(person)}')
