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
    rep1(i, h) cin >> s[i];
    vector<vector<ll> > a(h, vector<ll>(w)), b(h, vector<ll>(w)), c(h, vector<ll>(w)), d(h, vector<ll>(w));
    rep1(i, h) rep1(j, w){
        if (s[i][j]=='.'){
            if (j==0) a[i][j] = 1;
            else a[i][j] = a[i][j-1] + 1;
        }
        else a[i][j] = 0;
        if (s[i][w-1-j]=='.'){
            if (j==0) b[i][w-1-j] = 1;
            else b[i][w-1-j] = b[i][w-1-j+1] + 1;
        }
        else b[i][w-1-j] = 0;
    }
    rep1(i, w) rep1(j, h){
        if (s[j][i]=='.'){
            if (j==0) c[j][i] = 1;
            else c[j][i] = c[j-1][i] + 1;
        }
        else c[j][i] = 0;
        if (s[h-1-j][i]=='.'){
            if (j==0) d[h-1-j][i] = 1;
            else d[h-1-j][i] = d[h-1-j+1][i] + 1;
        }
        else d[h-1-j][i] = 0;
    }
    ll ans = 0;
    rep1(i, h) rep1(j, w){
        if (s[i][j]=='.'){
            ll cnt = a[i][j] + b[i][j] + c[i][j] + d[i][j] - 3;
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}