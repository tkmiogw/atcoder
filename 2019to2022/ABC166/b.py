n, k = map(int,input().split())
sunuke = [0 for i in range(n)]

for i in range(k):
    d = int(input())
    a = list(map(int, input().split()))
    for j in range(d):
        sunuke[a[j]-1] += 1

ans = 0
for i in range(n):
    if sunuke[i]==0:
        ans += 1 

print(ans)