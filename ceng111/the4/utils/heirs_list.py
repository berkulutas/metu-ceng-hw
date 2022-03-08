from tree import *
from pg import *
from persons import *

def heirs_finder(person):
    pg = pg_finder(person)
    spouse = spouse_finder(person)
    heirs = []
    if spouse != None and not isdead(spouse) and pg != []:
        # spouse with pg1
        if pg[0] == 1:
            heirs.append((spouse, 0.25))
            for i in pg[1]:
                heirs.append((i,0.75/len(pg[1])))

        # spouse with pg2
        if pg[0] == 2:
            heirs.append((spouse, 0.5))
            for i in pg[1]:
                heirs.append((i,0.5/len(pg[1])))

        # spouse with pg3
        if pg[0] == 3:
            heirs.append((spouse, 0.75))
            for i in pg[1]:
                heirs.append((i,0.25/len(pg[1])))

    elif (spouse == None or isdead(spouse)) and pg != []:
        for i in pg[1]:
            heirs.append((i,1/len(pg[1])))

    return heirs

def spouse_finder(person):
    try:
        spouse = marriedwith[person]
    except:
        spouse = None
    return spouse

def isdead(person):
    return person in deads

#print(isdead('lutfi'))
# print(heirs_finder('mert'))
# true_heirs_finder('mert')
for p in persons:
    print(f'{p} nin heirleri {heirs_finder(p)}')
