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
    vector<ll> a(n, 0), list(20, 0);
    rep1(i, n) cin >> a[i];
    ll sum = a[0];
    rep2(i, (ll)1, n){
        sum = sum ^ a[i];
    }
    ll ans = 0;
    rep1(i,n){
        ans = sum ^ a[i];
        if (i == 0) cout << ans;
        else cout << " " << ans;
    }
}