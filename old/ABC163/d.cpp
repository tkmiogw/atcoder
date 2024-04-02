#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll mod = 1000000007;
    if (n+1>k) rep2(i, k, n+2){
        ans += (i*(n-i+1)%mod+1)%mod;
        ans %= mod;
    }
    else ans = 1;
    cout << ans << endl;
}
