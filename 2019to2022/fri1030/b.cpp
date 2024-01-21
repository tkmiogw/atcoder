#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

typedef vector<vector<ll> > Graph;


vector<ll> seen;
void dfs(const Graph &G, ll v, ll ng) {
    seen[v] = true;
    for (auto next_v : G[v]) { 
        if (seen[next_v]>0) continue;
        dfs(G, next_v);
    }
}


int main() {
    ll n;
    cin >> n;
    Graph G(n);
    for (ll i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    seen.assign(n, 0, 0);
    dfs(G, 0);
    rep1(i, n) cout << seen[i] << endl;
    //printf("%.12f", ans);
}