#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1LL << 60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


// 入力
int N;
ll h[100010];

// DP テーブル
ll dp[100010];

int main() {
    int N; cin >> N;
    rep1(i, N) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    rep1(i, 100010) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    rep1(i, N) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    // 答え
    cout << dp[N-1] << endl;
}