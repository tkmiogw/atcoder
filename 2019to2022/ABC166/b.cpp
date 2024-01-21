#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n, k;
    cin >> n >> k;
    //vector<ll> d(n);
    //vector<vector<ll>> a(k,vector<ll>(m,0));
    vector<ll> kun(n);
    ll d, a;
    rep1(i, n){
        cin >> d;
        rep1(j, d){
            cin >> a;
            kun[a-1]++;
        }
    }
    ll ans = 0;
    rep1(i,n){
        if (kun[i] == 0) ans++;
    }
    cout << ans << endl;
}