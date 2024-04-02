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
    ll n, cnt;
    cin >> n;
    vector<ll> a(n);
    rep1(i, n) cin >> a[i];
    ll ans = 0;
    sort(a.begin(), a.end());
    for (ll i=0; i<(n); i++){
        for (ll j=i+1; j<(n); j++){
            for (ll k=j+1; k<(n); k++){
                if (a[i]==a[j] || a[j]==a[k]) continue;
                if (a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[k]+a[j]>a[i]) ans++;
            }
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}