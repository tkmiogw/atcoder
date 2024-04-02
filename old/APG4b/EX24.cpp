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
    vector<P> p;
    rep1(i, n){
      ll a, b;
      cin >> a >> b;
      P pair(b,a);
      p.push_back(pair);
    }
    sort(p.begin(), p.end());
    rep1(i,n){
      cout << p[i].second << " " << p[i].first << endl;
    }
}