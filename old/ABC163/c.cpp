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
    vector<ll> a(n+1, 0), b(n+10, 0);
    rep2(i, 2, n+1) {
        cin >> a[i];
        b[a[i]]++;
    }
    rep2(i, 1, n+1){
        cout << b[i] << endl;
    }
}