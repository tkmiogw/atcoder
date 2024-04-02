#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<ll> t(h), y(w);
    rep1(i, h) cin >> s[i];
    rep1(i, h){
        ll res = 0;
        rep1(j, w) if (s[i][j]=='.') res++;
        t[i] = res;
    }
    rep1(i, w){
        ll res = 0;
        rep1(j, h) if (s[j][i]=='.') res++;
        y[i] = res;
    }
    ll ans = 0; 
    rep1(i, h){
        ll res = 0;
        rep1(j, w) if (s[i][j]=='.') res = t[i] + y[j] - 1;
        ans = max(ans, res);
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}