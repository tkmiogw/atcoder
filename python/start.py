import subprocess, sys

#print("what is the  contest? ex: ABC163...")
contest = str(sys.argv[1])


problem = "abcdefgh"
codetmp = """import sys
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
"""

def output():
    subprocess.run(["mkdir", contest])
    cdir = contest
    #subprocess.run(["touch", cdir+"/README"])
    for i in range(0,len(problem)):
        subprocess.run(["echo", codetmp], stdout=open(cdir+"/"+problem[i]+".py", "wb"))
    subprocess.run(["cd", contest])
    return

output()