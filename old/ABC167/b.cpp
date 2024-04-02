#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll a, b ,c, k;
    cin >> a >> b >> c >> k;
    ll ans = 0;
    if (a >= k) ans = k;
    else if (a+b >= k) ans = a;
    else ans = 2*a + b - k;
    cout << ans << endl;
}