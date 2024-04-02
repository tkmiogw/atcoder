#! /usr/bin/env python3
import sys, math

A = int(input())
B = int(input())
C = int(input())
X = int(input())

sets = [[a,b,c] for a in range(0, A+1) for b in range(0, B+1) for c in range(0, C+1)]

def check(sets, X):
    pattern = 0
    for i in range(0, len(sets)):
        yen = 500*sets[i][0] + 100*sets[i][1] + 50*sets[i][2]
        if yen == X:
            pattern += 1
    return pattern

print(check(sets,X))
