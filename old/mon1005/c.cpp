#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    vector<vector<ll> > num(10, vector<ll>(10, 0));
    for (ll i=1; i<(n+1); i++){
        vector<ll> d;
        ll nn = i;
        while (nn){
            d.push_back(nn%10);
            nn /= 10;
        }
        ll a = d[0];
        ll b = d.back();
        if (!a || !b) continue;
        num[a][b]++;
    }
    for (ll a = 1; a < 10; ++a) {
        for (ll b = 1; b < 10; ++b) {
            ans += num[a][b] * num[b][a];
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}