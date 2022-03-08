list = [9,6,12,27,39,99,3,2,4,3,11,4,4,16,10,20,2,1,9,22,2,0,1,5,7,0]
# original [9,6,12,27,39,99,3,2,4,3,11,4,4,16,10,20,2,1,9,22,2,0,1,5,7,0]
# exponent [1,4,10,5,0,2,1,12,8,1,10,17,1,3,8,38,0,3,13,9,23,3,38,4,13,13,8,38,3,1,2,1,12,8,1,10,21,0,1]
# fib [1,1,4,32,11,2,43,8,32,16,10,13,0,3,31,4,30,11,8,30,5,8,31,3,32,4,30,7,9,0,0,1,32,4,93,50,4,28,0,1,19,44,9]
#print(len(list))
#print(list)
#for i in range(26):
    #print(i,list[i])

r1 = 0
r2 = 0
i = 0



def ins0():
    global r1, r2, i
    print(r1,r2,i)
def ins1():
    global r1, r2, i
    r1 = list[i+1]
    i = i+2
def ins2():
    global r1, r2, i
    r2 = list[i+1]
    i = i+2
def ins3():
    global r1, r2, i
    r1 = list[list[i+1]]
    i = i+2
def ins4():
    global r1, r2, i
    r2 = list[list[i+1]]
    i = i+2
def ins5():
    global r1, r2, i
    r1 = r2
    i = i+1
def ins6():
    global r1, r2, i
    r1 = list[r2]
    i = i+1
def ins7():
    global r1, r2, i
    list[r1] = r2
    i = i+1
def ins8():
    global r1, r2, i
    list[list[i+1]] = r1
    i = i+2
def ins9():
    global r1, r2, i
    i = list[i+1]
def ins10():
    global r1, r2, i
    if r1 == 0:
        i = i + 2
    else:
        i = list[i+1]
def ins11():
    global r1, r2, i
    r1 = r1 + r2
    i = i+1
def ins12():
    global r1, r2, i
    r1 = r1 - r2
    i = i+1
def ins13():
    global r1, r2, i
    r1 = r1*r2
    i = i+1
def ins14():
    global r1, r2, i
    r1 = int(r1/r2)
    i = i+1
    print("*"*50)
def ins15():
    global r1, r2, i
    r1 = -r1
    i = i+1
def ins16():
    global r1, r2, i
    if r1 == r2 :
        r1 = 0
    elif r1>r2:
        r1 = 1
    else:
        r1 = -1
    i = i+1

count = 0
print(r1,r2,i)
ins = []
while True:
    print()
    x = list[i]
    print("ins:",x)
    if x == 0:
        print("okke")
        count = count +1
        print("cycle:", count)
        print(r1,r2,i)
        print(list)
        break
    if x == 1:
	       ins1()
    if x == 2:
	       ins2()
    if x == 3:
	       ins3()
    if x == 4:
	       ins4()
    if x == 5:
	       ins5()
    if x == 6:
	       ins6()
    if x == 7:
	       ins7()
    if x == 8:
	       ins8()
    if x == 9:
	       ins9()
    if x == 10:
	       ins10()
    if x == 11:
	       ins11()
    if x == 12:
	       ins12()
    if x == 13:
	       ins13()
    if x == 14:
	       ins14()
    if x == 15:
	       ins15()
    if x == 16:
	       ins16()

    count = count +1
    print("cycle:", count)
    print(r1,r2,i)
    #print(list)
    #print(type(r1))
