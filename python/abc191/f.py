import sys
## 入力 x
x = int(input())
## 入力 x y
n,x = map(int, input().split(' '))
## 入力 n / a1 ... an
n = int(input())
a = list(map(int, input().split(' ')))
## 入力 n / s1 / s2 / ... / sn
n = int(input())
s=[]
for i in range(n):
    s.append(int(input()))
## 入力 n / x1 y1 / ... / xn yn
n=int(input())
pair = [tuple(map(int, input().split(' '))) for i in range(n)]

