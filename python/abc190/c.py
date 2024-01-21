n, m = map(int, input().split(" "))
ab = [tuple(map(int, input().split(" "))) for i in range(m)]

k = int(input())
cd = [tuple(map(int, input().split(" "))) for i in range(k)]


def get_array(i):
    ball = {x: False for x in range(n + 1)}
    for c, d in cd:
        if i % 2 == 1:
            ball[c] = True
        else:
            ball[d] = True
        i //= 2
    return ball


ans = 0
for i in range(2**k):
    tmp = 0
    ball = get_array(i)
    for a, b in ab:
        if ball[a] and ball[b]:
            tmp += 1
    ans = max(ans, tmp)

print(ans)
