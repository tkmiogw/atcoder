#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n;
    cin >> n;
    vector<string> s(n);
    rep1(i, n) cin >> s[i];
    sort(s.begin(),s.end());
    ll ans = 1;
    rep2(i,1,n){
        if (s[i-1]!=s[i]) ans++;
    }
    cout << ans << endl;
}