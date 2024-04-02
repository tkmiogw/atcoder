#! /usr/bin/env python3
import sys, math

x = int(input())
y = int(input())

def main(x,y):
    jud10000 = -1
    jud5000 = -1
    jud1000 = -1
    set = [[a, b, x-a-b] for a in range(0,x+1) for b in range(0, x-a+1)]
    for i in range(0, len(set)):
        yen = 10000*set[i][0] + 5000*set[i][1] + 1000*set[i][2]
        if yen == y:
            jud10000 = set[i][0]
            jud5000 = set[i][1]
            jud1000 = set[i][2]
        break
    result = str(jud10000)+' '+str(jud5000)+' '+str(jud1000)
    return result

print(main(x, y))
