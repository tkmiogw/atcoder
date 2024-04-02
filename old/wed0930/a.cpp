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
    double n;
    cin >> n;
    vector<double> a(n, 0);
    rep1(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    double ans = a[0];
    rep1(i, n-1){
        ans += a[i+1];
        ans /= 2;
    }
    //cout << ans << endl;
    printf("%.6f", ans);
}