#! /usr/bin/env python3
import sys, math

num = str(input())

def count_one(num):
    a = 0
    if num[0] == '1':
        a += 1
    if num[1] == '1':
        a += 1
    if num[2] == '1':
        a += 1
    return a

print(count_one(num))