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
    vector<ll> a(n, 0);
    ll amax = 0;
    map<ll, ll> m;
    rep1(i, n){
        cin >> a[i];
        m[a[i]]++;
        amax = max(amax, a[i]);
    }
    vector<bool> dp(amax+1, true);
    sort(a.begin(), a.end());
    ll ans = 0;
    rep1(i, n){
        if (dp[a[i]]){
            if (m[a[i]]==1) ans++;
            for (ll j=a[i]; j<amax+1; j+=a[i]) dp[j] = false;
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}