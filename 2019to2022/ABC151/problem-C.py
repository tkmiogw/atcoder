n, m = list(map(int, input().split()))

a = [0]*(n+10)
w = [0]*(n+10)

for i in range(0, m):
    p, s = input().split()
    p = int(p)
    if ((s == "AC")&(a[p] == 0)):
        a[p] += 1
    if ((s == "WA")&(a[p] == 0)):
        w[p] += 1
ac = 0
wa = 0
for i in range(0, n+10):
    ac += a[i]
    if a[i]==1:
        wa += w[i]
print(str(ac)+" "+str(wa))