n = int(input())
pair = [tuple(map(int, input().split(" "))) for i in range(n)]


ans = -1

for a, p, x in pair:
    if x - a > 0:
        if ans == -1:
            ans = p
        else:
            ans = min(ans, p)

print(ans)
