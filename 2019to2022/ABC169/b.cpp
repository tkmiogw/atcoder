#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const unsigned long long INF = 1000000000000000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    unsigned long long ans = 1;
    bool judge = true;
    rep1(i, n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0]==0){
        cout << 0 << endl;
        return 0;
    }
    rep1(i, n){
        if (a[i] <= INF/ans) ans *= a[i];
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
}