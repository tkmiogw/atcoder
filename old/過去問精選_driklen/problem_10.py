#! /usr/bin/env python3
import sys, math

N = int(input())
data = [[int(i) for i in input().split()] for j in range(0,N)]

def main(N, data):
    t, x, y = [0]*3
    ans = 'Yes'
    for d in data:
        dt = d[0] - t
        dist = abs(d[1]-x) + abs(d[2]-y)
        if (dist > dt or (dt-dist)%2 == 1):
            ans = 'No'
            break
    t, x, y = d
    return ans

print(main(N, data))