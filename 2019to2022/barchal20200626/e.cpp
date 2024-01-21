#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<bool> seen;
void dfs(const vector<vector<ll>> &G, int v) {
    seen[v] = true; // v を訪問済にする
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}


int main() {
    ll n, m, a, b;
    cin >> n >> m;
    vector<vector<ll>> G(n);
    rep1(i, m){
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    seen.assign(n, false);
    ll num = 0, ans = 0;
    bool judge = false;
    while (!judge){
        judge = true;
        dfs(G, num);
        rep2(i, num, n){
            if (!(seen[i])){
                num = i;
                ans++;
                judge = false;
                break;
            }
        }
    }
    cout << ans << endl;
}