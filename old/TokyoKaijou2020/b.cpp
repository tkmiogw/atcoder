#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1000000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll a, b, v, w, t;
    cin >> a >> v >> b >> w >> t;
    if (v-w>0 && abs(a-b) <= t*(v-w)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}