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
    vector<ll> a(n, 0);
    rep1(i, n) cin >> a[i];    
    map<ll, ll> count;
    rep1(i, n) count[i] = 0;
    rep1(i, n) count[a[i]]++;
    ll index = 0, max = 0;
    for (auto p : count){
      auto x = p.first; //index
      auto y = p.second;//value
      if (max < y){
        index = x;
        max = y;
      }
    }
    cout << index << " " << max << endl;
}