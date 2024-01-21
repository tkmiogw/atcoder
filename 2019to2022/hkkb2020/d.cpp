#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
const ll MOD = 1e9 + 7;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll solve(ll n, ll a, ll b){
    ll x = max(a, b);
    ll y = max(a, b);
    ll na = n - a + 1;
    ll nb = n - b + 1;
    ll res = a + b - 1;
    ll ans = (na*na%MOD * (nb*nb%MOD - res*res%MOD))%MOD;
    ans %=MOD;
    while (ans<0){
        ans += MOD;
        ans %= MOD;
    }
    return ans;
}

int main() {
    ll t;
    cin >> t;
    rep1(i, t){
        ll n, a, b;
        cin >> n >> a >> b;
        cout << solve(n, a, b) << endl;
    }
    
    //printf("%.12f", ans);
}