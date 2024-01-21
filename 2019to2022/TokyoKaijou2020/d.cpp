#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

ll dp[25][21000];
void job(vector<ll> V, vector<ll> W, ll v, ll L){
    ll input = v;
    vector<ll> p;
    p.push_back(input);
    while(input > 1){
        input /= 2;
        p.push_back(input);
    }
    ll n = p.size();
    rep1(w, n) dp[0][w] = 0;
    for (int i = 0; i < n; ++i) {
        for (int w = 0; w <= L; ++w) {
            if (w >= W[p[i]]) dp[i+1][w] = max(dp[i][w-W[p[i]]] + V[p[i]], dp[i][w]);
            else dp[i+1][w] = dp[i][w];
        }
    }
    cout << dp[n][L] << endl;
}

int main() {
    ll N, Q;
    cin >> N;
    vector<ll> V(N+1), W(N+1), v(N+1), L(N+1);
    rep2(i, 1, N+1) cin >> V[i] >> W[i];
    cin >> Q;
    rep2(i, 1, Q+1) cin >> v[i] >> L[i];
    rep2(i, 1, Q+1) job(V, W, v[i], L[i]);
}