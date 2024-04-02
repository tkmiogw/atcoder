#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

//小さい順に実装しても間に合うとは限らないよ？
int main() {
    ll n, m, k, A, B;
    cin >> n >> m >> k;
    vector<ll> a(n+1), b(m+1);
    rep1(i, n){
        cin >> A;
        a[i+1] += A + a[i];
    }
    rep1(i, m){
        cin >> B;
        b[i+1] += B + b[i];
    }
    a[0] = 0; b[0] = 0;
    ll ans = 0;
    ll j = m;
    rep2(i, 0, n+1){
        if (a[i] > k) break;
        while (b[j] > k - a[i] && j > 0){
            j--;
        }
        if (a[i]+b[j]<=k) ans = max(ans, i+j);
    }
    cout << ans << endl;
}