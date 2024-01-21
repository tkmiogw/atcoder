s = str(input())
ans = "Yes"
for i in range(len(s)):
    if i % 2 == 0 and s[i].isupper():
        ans = "No"
    elif i % 2 == 1 and s[i].islower():
        ans = "No"

print(ans)
