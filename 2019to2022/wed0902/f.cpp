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
    vector<ll> a(n, 0), b(n+1, 0);
    rep1(i, n){
        cin >> a[i];
        if (i==0) b[i+1] = a[i];
        else b[i+1] += b[i] + a[i];
    }
    ll ans = 0;
    for (ll i=1; i<(n+1); i++){
        ll left = -1;
        ll right = i;

        while (right - left > 1) {
            ll mid = left + (right - left) / 2;

            if (b[i]-b[mid]<k) right = mid;
            else left = mid;
        }

        ans += right;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}