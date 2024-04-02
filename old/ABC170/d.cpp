#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    rep1(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    rep1(i,n){
        ll k = 0;
        bool judge = true;
        if ((i-1>=0 && a[i]==a[i-1]) || (i+1<n && a[i]==a[i+1])){
            judge = false;
            continue;
        }
        while (a[k]<=a[i]/2 && k < i+1){
            if (a[i]%a[k]==0){
                judge = false;
            }
            if (!(judge)) break;
            ++k;
        }
        if (judge) ++ans;
    }
    cout << ans << endl;
}