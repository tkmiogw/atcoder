s = input()
n = len(s)

s1 = s[:int((n-1)/2)]
s2 = s[int((n+1)/2):]

if (s1 == s2 == s1[::-1] == s2[::-1]):
    print("Yes")
else:
    print("No")