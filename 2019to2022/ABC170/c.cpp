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
    ll x, n;
    cin >> x >> n;
    vector<ll> p(n, 0), l(200);
    rep1(i, n) cin >> p[i];
    ll num = 100000;
    ll ans = 0;
    sort(p.begin(), p.end(), greater<ll>());
    rep1(i,200) l[i] = i;
    rep1(i,p.size()){
        l.erase(l.begin() + p[i]);
    }
    rep1(i, l.size()){
        if (num > abs(x-l[i])){
            num = abs(x-l[i]);
            ans = l[i];
        }
    }
    cout << ans << endl;
}