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
    vector<ll> a(4);
    rep1(i, 4) cin >> a[i];
    for (int bit = 0; bit < (1<<4); ++bit) {
        ll x=0, y=0;
        for (int i = 0; i < 4; ++i) {
            if (bit & (1 << i)) x += a[i];
            else y += a[i];
        }
        if (x==y){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    //printf("%.12f", ans);
}