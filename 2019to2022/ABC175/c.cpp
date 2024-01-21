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
    ll x, k, d, ans;
    cin >> x >> k >> d;
    x = abs(x);
    ll count = x / d;
    ll res = k - count;
    if (res<0){
        ans = x - k*d;
        cout << ans << endl;
        return 0;
    }
    x -= d * count;
    if (res%2 == 0) ans = x;
    else ans = abs(x-d);
    cout << ans << endl;
    //printf("%.12f", ans);
}