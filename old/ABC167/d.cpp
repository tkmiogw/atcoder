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
    vector<ll> a(n, 0);
    rep1(i, n){
        cin >> a[i];
        a[i]--;
    }
    vector<ll> town(n+100, 0);
    rep2(i, 1, n+100){
        town[i] = a[town[i-1]];
    }
    ll num;
    vector<ll> visit(n+100, -1);
    rep1(i,n+100){
        if (visit[town[i]] > -1){
            num = i;
            break;
        }
        visit[town[i]] = i;
    }
    ll len = num - visit[town[num]];
    ll init = visit[town[num]];
    ll res = (k-init)%len;
    ll ans = town[min(k,res+init)];
    cout << ans+1 << endl;
}