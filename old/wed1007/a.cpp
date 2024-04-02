#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n, 0), b(n, 0);
    rep1(i, n) cin >> a[i] >> b[i];
    vector<vector<ll> > dp(n+10, vector<ll>(h+10, INF));
    dp[0][0] = 0;
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j <= h; ++j) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][min(j+a[i], h)] = min(dp[i+1][min(j+a[i], h)], dp[i+1][j] + b[i]);
        }
    }
    cout << dp[n][h] << endl;
    //printf("%.12f", ans);
}