#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1e9;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> h(n), w(m);
    rep1(i, n) cin >> h[i];
    rep1(i, m) cin >> w[i];
    sort(h.begin(), h.end());
    vector<ll> suml(n), sumr(n);
    for (ll i=2; i<(n); i+=2) suml[i] = suml[i-2] + abs(h[i-2]-h[i-1]);
    for (ll i=n-3; i>=0; i-=2) sumr[i] = sumr[i+2] + abs(h[i+2]-h[i+1]);
    ll ans = INF;
    rep1(i, m){
        ll left = -1, right = n;
        while (right - left > 1) {
            ll mid = left + (right - left) / 2;
            if (h[mid]<w[i]) left = mid;
            else right = mid;
        }
        ll ndx;
        if (right%2==0) ndx = right;
        else ndx = left;
        ll cnt = abs(w[i]-h[ndx]) + suml[ndx] + sumr[ndx];
        ans = min(ans, cnt); 
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}