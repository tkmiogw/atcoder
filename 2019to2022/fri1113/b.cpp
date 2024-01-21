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
    vector<double> a(n, 0);
    ll ans1 = 0;
    double ans2 = 0;
    ll ans3 = 0;
    rep1(i, n){
        cin >> a[i];
        ans1 += abs(a[i]);
        ans2 += a[i]*a[i];
        ans3 = max(ans3, (ll)abs(a[i]));
    }
    cout << ans1 << endl;
    cout << fixed << setprecision(15) << sqrt(ans2) << endl;
    cout << ans3 << endl;
    //printf("%.12f", ans);
}