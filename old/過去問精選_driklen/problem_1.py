#! /usr/bin/env python3
import sys, math

a, b= (int(i) for i in input().split()) 

def check_even(a,b):
    if a*b % 2 == 0:
        return "Even"
    else:
        return "Odd"

print(check_even(a,b))
