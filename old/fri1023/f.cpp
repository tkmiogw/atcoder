#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
const ll MOD = 998244353;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    map<ll, ll> m;
    ll ma = 0;
    rep1(i, n){
        cin >> a[i];
        ma = max(ma, a[i]);
        m[a[i]]++;
    }
    if (a[0]!=0 || m[0]>1){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> b(ma+1, 0);
    for (auto x: m) b[x.first] = x.second;
    ll ans = 1;
    for (ll i=2; i<=ma; i++){
        ans *= modpow(b[i-1], b[i], MOD);
        ans %= MOD;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}