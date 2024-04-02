#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep(i, n) for (ll i=1; i<(n+1); i++) 


int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i, n){
        rep(j,n){
            rep(k,n){
                ans += gcd(i,gcd(j,k));
            }
        }
    }    
    cout << ans << endl;
}