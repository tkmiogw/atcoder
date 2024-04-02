#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll k;
    cin >> k;
    ll a, b;
    cin >> a >> b;
    string ans = "NG";
    for (int i=1; i*k<1001; i++){
        if (a<=i*k & i*k <= b) ans = "OK";
    }
    cout << ans << endl;
}