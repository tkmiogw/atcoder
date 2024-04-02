#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


ll gotsum(ll n){
    ll ans = 0;
    while (n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = max(gotsum(a), gotsum(b)); 
    cout << ans << endl;
    //printf("%.12f", ans);
}

