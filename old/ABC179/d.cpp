#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1e9;
const ll MOD = 998244353;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> dp(n+1, 0), sum(n+1, 0),l(k), r(k);
    rep1(i, k) cin >> r[i] >> l[i];
    rep2(i, 1, n+1){
        if (i==1){
            sum[i] = 1;
            continue;
        }
        rep1(j, k){
            if (i-r[j]>0){
                if (i-l[j]>0)dp[i] += (sum[i-r[j]] - sum[i-l[j]-1]%MOD+MOD)%MOD;
                else dp[i] += sum[i-r[j]];
            }
        }
        dp[i] %= MOD;
        sum[i] = (sum[i-1] + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
    //printf("%.12f", ans);
}