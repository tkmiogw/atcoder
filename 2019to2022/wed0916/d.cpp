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
    ll n, k;
    cin >> n >> k;
    ll ans = 0; 
    if (k%2!=0){
        ll x = n / k;
        ans = pow((double)x, 3.0);
    }
    else {
        ll x = n / k;
        ll y = n / (k/2) - x;
        ans = pow((double)x, 3.0) + pow((double)y, 3.0);
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}