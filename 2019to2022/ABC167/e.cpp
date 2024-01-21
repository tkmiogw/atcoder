#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1LL << 60;
const ll MOD = 998244353;
const ll MAX = 510000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using namespace std;
ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<ll> a(N+10,1); //累積積
    rep1(i,N+5) a[i+1] = (a[i]*(M-1))%MOD;
    COMinit();
    ll ans = 0;
    rep1(i, K+1){
        ans += ((M*a[N-1-i]%MOD)*COM(N-1,i))%MOD;
        ans %= MOD;
    }

    cout << ans << endl;
}