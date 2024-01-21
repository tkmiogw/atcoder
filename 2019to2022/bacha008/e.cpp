#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    ll n, m, q;
    cin >> n >> m;
    vector<vector<ll>> r(m, vector<ll>(3));
    rep1(i, m) cin >> r[i][1] >> r[i][2] >> r[i][0];
    cin >> q;
    vector<vector<ll>> s(q, vector<ll>(2));
    rep1(i, q) cin >> s[i][1] >> s[i][0];
    sort(r.begin(), r.end(), greater<vector<ll>>());
    sort(s.begin(), s.end(), greater<vector<ll>>());
    vector<ll> ans(q);


    rep1(i, q) cout << ans[i] << endl;
}