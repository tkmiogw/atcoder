#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll count(ll n, ll a){
    ll count = 0;
    while (n > 0){
        count++;
        n /= a;
    }
    return count;
}

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll res = b / ((a-1) * x);
    ll ans = count(res, a);
    ll nx = x * pow(a, ans);
    if (nx>=y){
        ans = count((y-1)/x, a) - 1;
        cout << ans << endl;
        return 0;
    }
    ans += max((ll)0, (y - 1 - nx) / b);
    cout << ans << endl;
    //printf("%.12f", ans);
}