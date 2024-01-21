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
    ll n, q;
    cin >> n;
    vector<ll> a(n, 0), num(100001, 0);
    ll sum = 0;
    rep1(i, n){
        cin >> a[i];
        num[a[i]] += 1;
        sum += a[i];
    }
    cin >> q;
    vector<ll> b(q, 0), c(q, 0);
    ll num_b = 0;
    rep1(i, q) cin >> b[i] >> c[i];
    rep1(i, q){
        num_b = num[b[i]];
        num[b[i]] = 0;
        num[c[i]] += num_b;
        sum = sum + (c[i]-b[i])*num_b;
        cout << sum << endl;
    }
}