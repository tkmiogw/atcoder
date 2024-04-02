#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep(i, n) for (ll i=0; i<(n); i++) 


int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans1 = 0, ans2 = 0, r = 0, g = 0, b = 0;
    rep(i,n){
        if (s[i]=='R') r++;
        if (s[i]=='G') g++;
        if (s[i]=='B') b++;
    }
    ans1 = r*g*b;
    rep(i,n){
        for (ll j=i+1; j<(n); j++){
            ll k = 2*j - i;
            if ((k<n)&&(s[i]!=s[j])&&(s[i]!=s[k])&&(s[k]!=s[j])) ans2++;
        }
    }
    ll ans = ans1 - ans2;
    cout << ans << endl;
}