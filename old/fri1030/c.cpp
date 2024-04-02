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
    vector<ll> a(n, 0), one(64, 0), zero(64, 0);
    rep1(i, n){
        cin >> a[i];
        rep1(j, 64){
            if (a[i] & (1LL << j)) one[j]++;
            else zero[j]++;
        }
    }
    ll ans = 0;
    rep1(i, 64){
        ans = (ans + modpow(2, i, MOD)*(one[i]*zero[i]%MOD)%MOD) % MOD;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}