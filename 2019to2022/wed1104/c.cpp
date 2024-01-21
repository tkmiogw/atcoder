#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using Graph = vector<vector<ll>>;

int main() {
    ll N; cin >> N;

    Graph G(N);
    for (ll i = 0; i < N-1; ++i) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> dist(N, 0);
    queue<ll> que;

    dist[0] = 1;
    que.push(0);
    ll k = 0;
    while (!que.empty()) {
        ll v = que.front();
        que.pop();
        vector<ll> res = G[v];
        map<ll, ll> m;
        for (ll x: res) m[x]++;
        ll col = 1;
        for (ll nv : res){
            if (dist[nv] != 0) continue;
            while (m[col]>0) col++;
            dist[nv] = col;
            k = max(k, col);
            que.push(nv);
        }
    }
    cout << k << endl;
    for (ll v = 0; v < N; ++v) cout << dist[v] << endl;
}