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
    ll n, a;
    cin >> n;
    vector<ll>  p(1000000, 0);
    ll ans = 0;
    rep1(i, n){
        cin >> a;
        if (p[a] != 0) ans++;
        p[a]++;
    }
    cout << ans << endl;
}