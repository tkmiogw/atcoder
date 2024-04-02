#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

ll N, M, X;
ll c[12], b[12][12];
ll ans = INF;


void dfs(vector<ll> &A) {
    // 数列の長さが N に達したら打ち切り
    if (A.size() == N) {
        vector<ll> s(M);
        ll sum = 0;
        for (ll i=0; i<N; i++){
            if (A[i]==1){
                rep1(j, M){
                    s[j] += b[i][j];
                }
                sum += c[i];
            }
        }
        sort(s.begin(), s.end());
        if (s[0]>=X) ans = min(sum, ans);
        return;
    }
    for (int v = 0; v < 2; ++v) {
        A.push_back(v);
        dfs(A);
        A.pop_back();
    }
}


int main() {
    cin >> N >> M >> X;
    rep1(i, N){
        cin >> c[i];
        rep1(j, M) cin >> b[i][j];
    }
    vector<ll> A;
    dfs(A);
    if (ans != INF){
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }
}