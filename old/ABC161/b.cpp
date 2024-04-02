#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++) 
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n, 0);
    ll sum = 0;
    rep(i, n){
        cin >> a[i];
        sum += a[i];
    }
    ll j = sum / (4 * m);
    ll count = 0;
    rep(i,n){
        if ((sum%(4 * m)==0)&&(a[i] >= j)) count++;
        if ((sum%(4 * m)!=0)&&(a[i] > j)) count++;
    }
    string ans = "No";
    if (count >= m) ans = "Yes";
    cout << ans << endl;
}