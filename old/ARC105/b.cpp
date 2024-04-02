#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    ll m = INF;
    rep1(i, n){
        cin >> a[i];
        m = min(m, a[i]);
    }
    map<ll, ll> ma;
    rep1(i, n){
        ma[a[i]%m]++;
    }
    vector<ll> b;
    for (auto x: ma){
        if (x.first!=0) b.push_back(x.first);
    }
    while (b.size()>0){
        m = b[0];
        map<ll, ll> res;
        for (auto x: b) if (x%m!=0) res[x%m]++;
        b.assign(0, 0);
        for (auto x: res) b.push_back(x.first);
    }
    cout << m << endl;
    //printf("%.12f", ans);
}