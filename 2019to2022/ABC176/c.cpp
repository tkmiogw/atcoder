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
    vector<ll> a(n, 0);
    rep1(i, n) cin >> a[i];
    ll ans = 0;
    ll now = 0;
    rep1(i, n){
        if (i==0) now = a[i];
        else {
            if (a[i]<a[i-1]){
                ans += a[i-1] - a[i];
                a[i] = a[i-1];
            }
            else now = a[i];
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}