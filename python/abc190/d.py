n = int(input())

"""
(初項+末項)*項数/2=nとなる組み合わせの個数を探索する
末項は(初項+項数-1)と表現できる
(初項*2+項数-1)*項数=2nとなる組み合わせを検討する

# 2*nの因数を全列挙する
例1の場合
24の因数を全列挙
1, 2, 3, 4, 6, 8, 12, 24
24, 12, 8, 6, 4, 3, 2, 1

# 項数は2nの因数となるため, 因数を総なめして初項の洗い出しを行えばよい(できるか否か判定)
初項*2 = 2*12/項数 + 1 - 項数
右辺が偶数となれば成立
実際に当てはまるのが
項数=1, 3, 8, 24
の4つ

因数前列挙さえクリアできれば高々オーダーNで計算可能
"""


def make_divisors(n):
    lower_divisors, upper_divisors = [], []
    i = 1
    while i * i <= n:
        if n % i == 0:
            lower_divisors.append(i)
            if i != n // i:
                upper_divisors.append(n // i)
        i += 1
    return lower_divisors + upper_divisors[::-1]


ans = 0
div = make_divisors(n * 2)
for x in div:
    tmp = (2 * n) / x + 1 - x
    if tmp % 2 == 0:
        ans += 1
print(ans)
