#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//using P = pair<ll, ll>;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

//この問題で特別に追加するもの
const int MAX = 2500;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using pll = pair<ll, ll>; // (money, time)
using Edge = pair<int, pll>;
using Graph = vector<vector<Edge>>;


int main() {
    ll n, m, s;
    cin >> n >> m >> s;
    vector<ll> u(m, 0), v(m, 0), a(m, 0), b(m, 0), c(n, 0), d(n, 0);
    rep1(i, m) cin >> u[i] >> v[i] >> a[i] >> b[i];    
    rep1(i, n) cin >> c[i] >> d[i];    
    cout << "Hello, world!" << endl;
}

int N, M;
long long S;
Graph G;
vector<long long> C, D; // money, time

void solve() {
    if (S >= MAX) S = MAX;
    //dpのための行列(頂点, 所持金)最小となるように探索するよ
    vector<vector<long long>> dp(N, vector<long long>(MAX+1, INF));
    //queueを使ってdpの処理を行っていく？
    priority_queue<pair<long long, pll>, vector<pair<long long, pll> >, greater<pair<long long, pll> > > que;
    dp[0][S] = 0;
    que.push(make_pair(0, pll(0, S)));
    while (!que.empty()) {
        //time, v, s をセットする
        auto p = que.top(); que.pop();
        long long time = p.first;
        int v = p.second.first;
        long long s = p.second.second;
        if (time > dp[v][s]) continue; //もう先に早いものが登場しています

        // 都市Vでお金の補充（sの値の拡張）
        if (s + C[v] <= MAX) {
            long long ns = s + C[v]; //お金
            long long ntime = time + D[v]; //時間
            //既存のものより早ければ格納しましょう
            if (chmin(dp[v][ns], ntime)) {
                que.push(make_pair(ntime, pll(v, ns)));
            }
        }
        // 辺を通る
        for (auto e : G[v]) {
            if (s < e.second.first) continue;
            int nv = e.first;
            long long ns = s - e.second.first;
            long long ntime = time + e.second.second;
            if (chmin(dp[nv][ns], ntime)) {
                que.push(make_pair(ntime, pll(nv, ns)));
            }
        }
    }
    //出力のパート
    for (int v = 1; v < N; ++v) {
        long long res = INF;
        for (int s = 0; s <= MAX; ++s) chmin(res, dp[v][s]);
        cout << res << endl;
    }
}

int main() {
    cin >> N >> M >> S;
    G.assign(N, vector<Edge>());
    for (int i = 0; i < M; ++i) {
        long long u, v, a, b;
        cin >> u >> v >> a >> b;
        --u, --v;
        G[u].push_back(Edge(v, pll(a, b)));
        G[v].push_back(Edge(u, pll(a, b)));
    }
    C.resize(N); D.resize(N);
    for (int i = 0; i < N; ++i) cin >> C[i] >> D[i];
    solve();
}