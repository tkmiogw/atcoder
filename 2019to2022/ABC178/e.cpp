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
    ll n, x, y;
    cin >> n;
    vector<ll> a, b;
    rep1(i, n){
        cin >> x >> y;
        a.push_back(x+y);
        b.push_back(x-y);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = max(abs(a[0]-a[n-1]), abs(b[0]-b[n-1])); 
    cout << ans << endl;
    //printf("%.12f", ans);
}