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
    vector<ll> h(n), count(n);
    rep1(i, n) cin >> h[i];
    ll a, b;
    rep1(i,m){
        cin >> a >> b;
        if (h[a-1] < h[b-1]) count[a-1]++;
        if (h[a-1] > h[b-1]) count[b-1]++;
        if (h[a-1] == h[b-1]){
            count[a-1]++;
            count[b-1]++;
        } 
    }
    ll ans = 0;
    rep1(i,n){
        if (count[i] == 0) ans++;
    }
    cout << ans << endl;
}