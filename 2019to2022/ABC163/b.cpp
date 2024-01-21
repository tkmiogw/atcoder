#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m, 0);
    rep1(i, m) cin >> a[i];
    ll sum = accumulate(a.begin(), a.end(), 0);
    ll ans = 0;
    if (sum > n) ans = -1;
    else ans = n - sum;
    cout << ans << endl;
}