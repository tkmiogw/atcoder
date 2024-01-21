#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll taka = a/d;
    ll aoki = c/b;
    if (a%d != 0) taka++;
    if (c%b != 0) aoki++;
    string ans = "No";
    if (taka >=aoki) ans = "Yes";
    cout << ans << endl;
}