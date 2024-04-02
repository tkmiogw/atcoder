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
    vector<ll> a(n), b(n);
    rep1(i, n){
        cin >> a[i] >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans;
    if (n%2 != 0){
        ll min, max;
        ll index = n/2;
        min = a[index];
        max = b[index];
        ans = abs(max - min)+1;
    }
    else{
        ll min, max;
        ll index_a = n/2-1;
        ll index_b = n/2;
        min = a[index_a]+a[index_b];
        max = b[index_a]+b[index_b];
        ans = abs(max - min) + 1;
    }
    cout << ans << endl;
}