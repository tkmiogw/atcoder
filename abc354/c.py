import numpy as np
import bisect


n = int(input())
l = [list(map(int, input().split())) + [l + 1] for l in range(n)]

l.sort()
l = np.array(l)
ans = []

for i in range(len(l)):
    if i == len(l) - 1:
        ans.append(l[i][2])
    elif sorted(l[i + 1 :, 1])[0] > l[i][1]:
        ans.append(l[i][2])

ans.sort()
print(len(ans))
print(" ".join(map(str, ans)))
