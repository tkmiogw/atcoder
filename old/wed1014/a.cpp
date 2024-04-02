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
    vector<ll> x(n), y(n), h(n);
    rep1(i, n) cin >> x[i] >> y[i] >> h[i];
    rep1(i, 101) rep1(j, 101){
        ll cnt;
        bool check = true;
        rep1(k, n){
            if (h[k]>0){
                cnt = h[k] + abs(x[k]-i) + abs(y[k]-j);
                break;
            }
        }
        rep1(k, n) {
            ll res = max((ll)0, cnt-(abs(x[k]-i) + abs(y[k]-j)));
            if (h[k]!=res){
                check = false;
                break;
            }
        }
        if (check){
            cout << i << " " << j << " " << cnt << endl;
            return 0;
        }
    }
    //printf("%.12f", ans);
}