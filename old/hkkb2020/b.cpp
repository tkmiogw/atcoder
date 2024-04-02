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
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep1(i, h) cin >> s[i];
    ll ans = 0;
    rep1(i, h){
        rep1(j, w-1){
            if (s[i][j]=='.' && s[i][j+1]=='.') ans++;
        }
    }
    rep1(i, w){
        rep1(j, h-1){
            if (s[j][i]=='.' && s[j+1][i]=='.') ans++;
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}