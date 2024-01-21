#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> enum_divisors(ll N) {
    vector<ll> res;
    for (ll i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // d•¡‚µ‚È‚¢‚È‚ç‚Î i ‚Ì‘Š•û‚Å‚ ‚é N/i ‚à push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // ¬‚³‚¢‡‚É•À‚Ñ‘Ö‚¦‚é
    sort(res.begin(), res.end());
    return res;
}

int main() {
    ll n, m;
    cin >> n >> m;
    const auto &res = enum_divisors(m);
    ll ans = 1;
    rep1(i, res.size()){
        if (m/res[i]<n){
            if (i!=0) ans = res[i-1];
            break;
        }
        if (i==res.size()-1) ans = m;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}