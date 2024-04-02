#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1e9 + 7;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m, 0), b(m, 0);
    rep1(i, m) cin >> a[i];
    rep1(i, m-1){
        if (a[i+1] - a[i]<=1){
            cout << 0 << endl;
            return 0;
        }
        b[i] = a[i+1] - a[i] - 2;
    }
    ll ini = a[0]-1;
    ll las = n-1-a[m-1];
    vector<ll> dp(n+100, 0);
    dp[0] = 1;
    rep1(i, n){
        dp[i+1] = (dp[i+1] + dp[i]) % MOD;
        dp[i+2] = (dp[i+2] + dp[i]) % MOD;
    }
    ll ans = 1;
    ans *= dp[ini];
    ans %= MOD;
    rep1(i, m-1){
        ans *= dp[b[i]];
        ans %= MOD;
    }
    ans *= dp[las];
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
