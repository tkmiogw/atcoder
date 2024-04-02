import sys

n, m, t=map(int,input().split())
ab = [map(int, input().split()) for _ in range(m)]
a, b = [list(i) for i in zip(*ab)]
a = [0] + a + [t]
b = [0] + b + [t]

ans = n
for time in range(len(a)):
    ans -= a[time] - b[time-1]
    if ans <= 0:
        print("No")
        sys.exit()
    ans = min(n, ans+(b[time]-a[time]))
print("Yes")