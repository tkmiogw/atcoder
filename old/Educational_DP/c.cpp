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
ll a[100010][3];

// DP テーブル
ll dp[100010][3];

int main() {
    int N; cin >> N;
    rep1(i, N) rep1(j, 3) cin >> a[i][j];

    // ループ
    rep1(i, N) {
        rep1(j, 3) {
            rep1(k, 3) {
                if (j == k) continue;
                chmax(dp[i+1][k], dp[i][j]+a[i][k]);
            }
        }
    }
    ll ans = 0;
    rep1(i,3) chmax(ans, dp[N][i]);
    // 答え
    cout << ans << endl;
}