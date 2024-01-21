def collect(x):
    out = []
    if x == 0:
        return ["0"]
    while x > 0:
        out.append(str(x % 10))
        x = int(x / 10)
    return out


def g_one(x):
    n = collect(x)
    n.sort(reverse=True)
    return int("".join(n))


def g_two(x):
    n = collect(x)
    n.sort(reverse=False)
    return int("".join(n))


n, k = map(int, input().split(" "))
ans = n
for _ in range(k):
    ans = g_one(n) - g_two(n)
    n = ans

print(ans)
