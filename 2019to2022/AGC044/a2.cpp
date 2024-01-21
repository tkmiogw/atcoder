#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = LLONG_MAX;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll ans;
void dfs(ll num, ll coin, vector<ll> &V){
    if (num==1){
        ans = min(coin+V[3], ans);
        return;
    }
    if ((num%2 != 0)&&(num%3 != 0)&&(num%5 != 0)){
        dfs(num-1, coin+V[3], V);
        dfs(num+1, coin+V[3], V);
    }
    if (num%2 == 0) dfs(num/2, coin+V[0], V);
    if (num%3 == 0) dfs(num/3, coin+V[1], V);
    if (num%5 == 0) dfs(num/5, coin+V[2], V);
}



int main(){
    ll T;
    cin >> T;
    rep1(i, T){
        ll N;
        vector<ll> V(4);
        cin >> N;
        rep1(j, 4) cin >> V[j];
        ans = INF;
        dfs(N, 0, V);
        cout << ans << endl;
    }
}
// 入力
int N;
ll h[100010];

// DP テーブル
ll dp[100010];

int main() {
    int N; cin >> N;
    rep1(i, N) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    rep1(i, 100010) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    rep1(i, N) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    // 答え
    cout << dp[N-1] << endl;
}