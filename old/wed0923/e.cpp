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
    ll n, a;
    cin >> n;
    vector<ll> x(n+2), s(n+2);
    rep1(i, n){
        cin >> a;
        if (i==0){
            x[i+1] = a;
            s[i+1] = a;
        }
        else {
            x[i+1] = x[i] ^ a;
            s[i+1] = s[i] + a;
        }
    }
    ll ans = 0;
    for (ll i=0; i<(n+1); i++){
        ll left = i;
        ll right = n+1;
        while (right-left>1){
            ll mid = (right + left) / 2;
            ll res = x[mid] ^ x[i];
            if (res==s[mid]-s[i]) left = mid;
            else right = mid;
        }
        ans += left - i;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}