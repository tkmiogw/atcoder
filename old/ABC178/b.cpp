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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans;
    vector<ll> val(3);
    val[0] = max(a*c, b*d);
    val[1] = max(a*d, b*c);
    ans = max(val[0], val[1]);
    if ((a<0 && b>0) || (c<0 && d>0))ans = max(ans, (ll)0);
    cout << ans << endl;
    //printf("%.12f", ans);
}