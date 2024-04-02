n = int(input())
s = 'abcdefghijklmnopqrstuvwxyz'
ans = ''
num_list = []
num = 1
while (num < n):
    num_list.append(num)
    num *= 26
#num = num_list[len(num_list)-1]*26
#num_list.append(num)
num_list.sort(reverse=True)
for i in range(len(num_list)):
    index = (n/num_list[i])+10
    if (i == 0):
        ans = s[index]
    else:
        ans = ans + s[index]
    n %= num_list[i]

print(ans)