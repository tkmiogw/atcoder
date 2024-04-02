#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep(i, n) for (ll i=0; i<(n); i++) 


int main() {
    ll n;
    cin >> n;
    string ans = "No";
    while (n > 0){
        if (n%10 == 7) ans = "Yes";
        n /= 10;
    }
    cout << ans << endl;
}