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
    vector<ll> L(100, 0);
    L[0] = 2;
    L[1] = 1;
    rep2(i, 2, 100) {
      L[i] += L[i-1] + L[i-2];
    }
    cout << L[n] << endl;
}