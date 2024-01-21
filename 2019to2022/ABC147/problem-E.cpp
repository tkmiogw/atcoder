//sample answer"https://atcoder.jp/contests/abc147/submissions/8872500"
#include <bits/stdc++.h>
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx")
using namespace std;
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }

constexpr int b = 80 * 80 + 3;
constexpr int M = b * 2 + 3;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(H, vector<int>(W));
    cin >> A >> B;

    vector<bitset<M>> dp(W + 1);
    dp[1][b] = 1;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int d = abs(A[i][j] - B[i][j]);
            dp[j + 1] |= dp[j];
            dp[j + 1] = (dp[j + 1] << d) | (dp[j + 1] >> d);
        }
    }
    printf("%d", dp.back()._Find_next(b - 1) - b);
}
