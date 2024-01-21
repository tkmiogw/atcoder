#! /usr/bin/env python3
import sys, math

N = int(input())
card = [int(i) for i in input().split()]

def main(card):
    cards = sorted(card, reverse=True)
    a_sum = sum(cards[0::2])
    b_sum = sum(cards[1::2])
    dif = a_sum - b_sum
    return dif

print(main(card))
