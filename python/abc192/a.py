# v, t, s, d = map(int, input().split(" "))

# # vt <= d <= vs でなければ大丈夫
# if v * t > d or v * s < d:
#     print("Yes")
# else:
#     print("No")

x = int(input())
ans = 100 - x % 100
print(ans)
