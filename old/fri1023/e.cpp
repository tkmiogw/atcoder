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
    vector<P> r;
    rep1(i, n){
        ll x, l;
        cin >> x >> l;
        r.push_back(make_pair(x+l, x-l));
    }
    sort(r.begin(), r.end());
    ll ans = 0;
    ll cur = -INF;
    rep1(i, n){
        if (cur>r[i].second) continue;
        ans++;
        cur = r[i].first;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}