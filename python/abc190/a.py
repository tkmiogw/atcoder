a,b,c = map(int, input().split(' '))

if a > b or (a==b and c==1):
    print("Takahashi")
else:
    print("Aoki")