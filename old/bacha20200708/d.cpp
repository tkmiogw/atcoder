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
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    if (n==1 & m==1) ans = 1;
    else if (n==1 & m!=1) ans = m-2;
    else if (n!=1 & m==1) ans = n-2;
    else ans = (n-2)*(m-2);
    cout << ans << endl;
}