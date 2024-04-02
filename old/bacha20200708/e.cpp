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
    string s;
    cin >> s;
    vector<ll> a(n+1, 0), b(n+1, 0), c(n+1, 0);
    rep1(i, n){
        if (s[i]=='W'){
            a[i] = -1;
            if (i!=0){
                b[i] += b[i-1] + 1;
                c[i] = c[i-1];
            }
            else b[i] = 1;
        }
        if (s[i]=='E'){
            a[i] = +1;
            if (i!=0){
                c[i] += c[i-1] + 1;
                b[i] = b[i-1];
            }
            else c[i] = 1;
        }
    }
    ll ans = 10e6;
    ll res = 0;
    rep1(i,n){
        if (i==0) res = c[n-1] - c[i];
        else if (i==n-1) res = b[i-1];
        else res = b[i-1] + (c[n-1] - c[i]);
        ans = min(ans, res);
    }
    cout << ans << endl;
}