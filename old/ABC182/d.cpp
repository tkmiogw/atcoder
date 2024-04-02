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
    vector<ll> a(n, 0), b(n, 0), c(n, 0);
    rep1(i, n) cin >> a[i];
    rep1(i, n){
        if (i==0){
            b[i] = a[i];
            c[i] = max((ll)0, b[i]);
        }
        else{
            b[i] = b[i-1] + a[i];
            c[i] = max(b[i], c[i-1]);
        }
    }
    ll ans = 0;
    ll sum = 0;
    rep1(i, n){
        ans = max(ans, sum+c[i]);
        sum += b[i];
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}