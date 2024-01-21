#! /usr/bin/env python3
import sys, math

S = str(input())
S = S[::-1]
key_word = ['dream', 'dreamer', 'erase', 'eraser']
key_word = [key_word[i][::-1] for i in range(0,4)]


def main(S):
    ans = 'NO'
    while S:
        if S[:len(key_word[0])] == key_word[0]:
            S = S[len(key_word[0]):]
        elif S[:len(key_word[1])] == key_word[1]:
            S = S[len(key_word[1]):]
        elif S[:len(key_word[2])] == key_word[2]:
            S = S[len(key_word[2]):]
        elif S[:len(key_word[3])] == key_word[3]:
            S = S[len(key_word[3]):]
        else:
            break
        if not S:
            ans = 'YES'
    return ans

print(main(S))



