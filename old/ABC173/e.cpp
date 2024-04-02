#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 10e9 + 7;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n, k, res;
    cin >> n >> k;
    vector<ll> a, b;
    rep1(i, n){
        cin >> res;
        if (res > 0) a.push_back(res);
        else b.push_back(res);
    }
    sort(a.begin())
    ll ans = 0; 
    cout << ans << endl;
}