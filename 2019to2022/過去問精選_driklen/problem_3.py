#! /usr/bin/env python3
import sys, math

A = int(input())
B = int(input())
C = int(input())
N = int(input())

def check_even(A):
    num = [format(A[x], 'b')[::-1].find('1') for x in range(0,len(A))]
    return min(num)

print(check_even(A))