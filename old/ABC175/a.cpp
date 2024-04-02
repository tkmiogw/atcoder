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
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 0;
    ll ans = 0;
    rep1(i, n){
        if (s[i]=='R') cnt++;
    }
    if (cnt == 1) ans = 1;
    if (cnt == 3) ans = 3;
    if (cnt == 2){
        if (s[1]=='R') ans = 2;
        else ans = 1;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}