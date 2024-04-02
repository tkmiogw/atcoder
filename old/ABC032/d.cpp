#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n, W;
    cin >> n >> W;
    vector<ll> value(n), weight(n);
    rep1(i, n) cin >> value[i] >> weight[i];
    queue<vector<ll> > q;
    vector<ll> init(3);
    q.push(init);
    ll k, w;
    while (1){
        vector<ll> res = q.front();
        k = res[0];
        w = res[1];
        if (k==n) break;
        q.pop();
        res[0]++;
        q.push(res);
        if (w+weight[k]<=W){
            res[1] += weight[k];
            res[2] += value[k];
            q.push(res);
        }
    }
    ll ans = 0;
    while (!q.empty()){
        vector<ll> x = q.front(); q.pop();
        ans = max(ans, x[2]);
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}