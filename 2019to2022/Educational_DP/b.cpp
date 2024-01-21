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
int N, K;
ll h[100010];

// DP テーブル
ll dp[101000];

int main() {
    cin >> N >> K;
    rep1(i, N) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    rep1(i, 100010) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (ll i=0; i<N; i++) {
        for (ll j=1; j<=K; j++)
            chmin(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
    }

    // 答え
    cout << dp[N-1] << endl;
}