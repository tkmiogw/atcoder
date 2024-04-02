#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using Graph = vector<vector<int>>;
const int INF = 10000000;

// 深さ優先探索
map<int, pair<int, vector<int>>> ans;
void dfs(const Graph &G, int basho) {
    
    for (auto next_v : G[basho]) { 
        if (ans[next_v].first <= ans[basho].first + 1) continue; // next_v が探索済だったらスルー
        ans[next_v].first = ans[basho].first + 1;
        ans[next_v].second.push_back(basho);
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i < N; ++i){
        ans[i].first = INF;
    }
    ans[0].first = 0;
    dfs(G, 0);
    cout << "Yes" << endl;
    for (int i = 1; i < N; ++i){
        vector<int> list = ans[i].second;
        int len = list.size();
        for (int j = 0; j < len; ++j){
            if (len-1-j != 0) cout << list[len-1-j] << " ";
        }
        cout << endl;
    }
}