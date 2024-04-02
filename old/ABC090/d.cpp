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
    for (ll b=k+1; b<(n+1); b++){
        ans += max((ll)0, b-k) * (n/b);
        if (n%b!=0){
            if (k!=0) ans += max((ll)0, n%b-k+1);
            else ans += max((ll)0, n%b-k);
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}