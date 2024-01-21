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
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i=1; i<=(n); i++) for (ll j=1; j<=(n); j++) for (ll k=1; k<=(n); k++){
        ll res = gcd(i, j);
        res = gcd(res, k);
        ans += res;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}