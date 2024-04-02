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
    string c;
    cin >> c;
    vector<ll> a(n+10, 0);
    rep2(i, 1, n+1){
        if (c[i-1]=='R') a[i] += a[i-1] + 1;
        else a[i] += a[i-1];
    }
    ll num = a[n];
    ll ans;
    if (num == 0) ans = 0;
    else ans = num - a[num];
    cout << ans << endl;
}