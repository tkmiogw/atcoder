#! /usr/bin/env python3
import sys, math

N, A, B = (int(i) for i in input().split())  

def get_sum(num):
    sum = 0
    while num > 0:
        sum += num%10
        num /= 10
    return sum

def main(N,A,B):
    main_sum = 0
    for i in range(1, N+1):
        val = get_sum(i)
        if (val >= A and val <= B):
            main_sum += i
    return main_sum

print(main(N,A,B))