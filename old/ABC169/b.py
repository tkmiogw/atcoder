n = int(input())
a = list(map(int, input().split()))
a.sort()
judge = True
ans = 1
for i in a:
    ans *= i
    if (ans > 1000000000000000000):
        judge = False
        break

if judge:
    print(ans)
else:
    print(-1)
