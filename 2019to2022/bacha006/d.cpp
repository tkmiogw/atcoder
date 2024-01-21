#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1e11;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0), b(n, 0);
    rep1(i, n){
        cin >> a[i];
        if (i==0) b[i] = a[i];
        else b[i] += a[i] + b[i-1];
    }
    ll ans = INF;
    rep1(i, n-1){
        ans = min(ans, abs(b[n-1]-2*b[i]));
    }
    cout << ans << endl;
}