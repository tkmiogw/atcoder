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
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();
    ll cnt = 0;
    for (ll i=0; i<(n-m+1); i++) {
        ll count = 0;
        for (ll j=0; j<m; j++) {
            if (s[i+j]==t[j]) count++;
        }
        cnt = max(cnt, count);
    }
    ll ans = m - cnt; 
    cout << ans << endl;
    //printf("%.12f", ans);
}