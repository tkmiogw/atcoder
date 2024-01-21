n, s, d = map(int, input().split(" "))
pair = [tuple(map(int, input().split(" "))) for i in range(n)]

for x, y in pair:
    if x < s and y > d:
        print("Yes")
        import sys

        sys.exit()
print("No")
