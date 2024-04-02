#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> t(n, 0);
    rep1(i, n) cin >> t[i];
    ll ans = 10000000; 
    for (int bit = 0; bit < (1<<n); ++bit) {
        ll a=0, b=0;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                a += t[i];
            }
            else b += t[i];
        }
        ans = min(ans, max(a,b));
    }
    cout << ans << endl;
}