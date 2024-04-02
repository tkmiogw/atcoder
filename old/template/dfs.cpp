#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using Graph = vector<vector<int>>;

void dfs(vector<int> &A) {
    if (A.size() == N) {
        return;
    }

    for (int v = 0; v < M; ++v) {
        A.push_back(v);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    vector<int> A;
    dfs(A);
}



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
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    dfs(G, 0);
}