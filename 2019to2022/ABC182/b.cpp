#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    ll amax = 0;
    rep1(i, n){
        cin >> a[i];
        amax = max(a[i], amax);
    }
    ll ans = 0;
    ll res = 0;
    for (ll i=2; i<=amax; i++){
        ll cnt = 0;
        rep1(j, n){
            if (a[j]%i==0) cnt++;
        }
        if (cnt>res){
            res = max(res, cnt);
            ans = i;
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}