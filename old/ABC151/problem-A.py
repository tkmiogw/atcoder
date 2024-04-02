c = input()
alp = "abcdefghijklmnopqrstuvwxyz"
index = 0
for i in range(0,len(alp)):
    if alp[i] == str(c) :
        index = i
        break
print(c)