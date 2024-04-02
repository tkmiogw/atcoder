#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using Graph = vector<vector<int> >;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}


int main() {
    int N, M; cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    ll ans = -1;
    rep1(i, N) {
        if (seen[i]) continue;
        dfs(G, i);
        ans++;
    }
    if (ans<0) ans = 0;
    cout << ans << endl;
}