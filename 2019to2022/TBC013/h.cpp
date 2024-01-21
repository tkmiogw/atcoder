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
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    ll ave = 0;
    rep1(i, n){
        cin >> a[i];
        a[i] -= i+1;
    }
    sort(a.begin(), a.end());
    ll mid;
    if (n%2==0){
        mid = (a[n/2] + a[n/2-1]) / 2;
        mid += (a[n/2]-mid < mid-a[n/2-1]);
    }
    else mid = a[n/2];
    ll ans= 0;
    rep1(j, n) ans += abs(a[j]-mid);
    cout << ans << endl;
    //printf("%.12f", ans);
}