#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++) 
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;



int main() {
    ll n, k;
    cin >> n  >> k;
    ll ans = min(n%k, abs(n%k-k));
    cout << ans << endl;
}