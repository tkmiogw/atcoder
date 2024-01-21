n, x = map(int, input().split(" "))
a = list(map(int, input().split(" ")))

ans = [str(i) for i in a if i != x]
print(" ".join(ans))
