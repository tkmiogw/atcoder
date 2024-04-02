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
    ll ans1 = 0;
    double ans2 = 0;
    ll ans3 = 0;
    rep1(i, n){
        cin >> a[i];
        a[i] = abs(a[i]);
        ans1 += a[i];
        ans2 += a[i]*a[i];
        ans3 = max(a[i], ans3);
    }
    ans2 = sqrt(ans2);
    cout << ans1 << endl;
    cout << std::fixed << std::setprecision(15) << ans2 << endl;
    cout << ans3 << endl;    
}