from math import factorial
def com(n,r):
    return (factorial(n) // (factorial(r)*factorial(n-r)))

l=int(input())

# (L-1)C11を求めれば良い
ans = com(l-1, 11)
print(ans)
