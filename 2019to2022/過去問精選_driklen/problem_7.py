#! /usr/bin/env python3
import sys, math
import numpy as np

N = int(input())
cake = [int(i) for i in input().split()]

def main(N, cake):
    bucket = [0]*100
    for i in range(0, N):
        bucket[cake[i]] += 1
    sorted=np.nonzero(np.array(bucket))
    return len(sorted)

print(main(N, cake))