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
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> a(n, vector<ll>(2));
    rep1(i, n) cin >> a[i][1] >> a[i][0];
    rep1(i, q){
        ll c, d;
        cin >> c >> d;
        a[c-1][0] = d;
        
    }
    ll ans = 0; 
    cout << ans << endl;
}