#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll divide(ll x, ll y){
    ll count = 0;
    while (x/y>0){
        x /= y;
        count++;
    }
    return (ll)pow(y, count);
}

int main() {
    ll n;
    cin >> n;
    vector<ll> dp(100001, n);
    dp[n] = 0;
    for (ll i=n; i>0; i--) if (dp[i]!=n) {
        dp[i-divide(i, 9)] = min(dp[i-divide(i, 9)], dp[i]+1);
        dp[i-divide(i, 6)] = min(dp[i-divide(i, 6)], dp[i]+1);
    }
    ll ans;
    rep1(i, 10){
        if (dp[i]!=n){
            ans = dp[i] + i;
            break;
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}