#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n, m, a;
    cin >> n >> m;
    priority_queue<ll> pq;
    rep1(i, n){
        cin >> a;
        pq.push(a);
    }
    ll num;
    rep1(i,m){
        num = pq.top(); pq.pop();
        num /= 2;
        pq.push(num);
    }
    ll ans = 0;
    while (!pq.empty()) {
        num = pq.top(); pq.pop();
        ans += num;
    }
    cout << ans << endl;
}