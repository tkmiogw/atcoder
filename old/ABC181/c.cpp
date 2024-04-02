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
    vector<ll> x(n, 0), y(n, 0);
    rep1(i, n) cin >> x[i] >> y[i];
    rep1(i, n) rep1(j, n) rep1(k, n){
        if (i==j || j==k || k==i) continue;
        ll a = (y[i]-y[j])*(x[k]-x[j]);
        ll b = (x[i]-x[j])*(y[k]-y[j]);
        if (a==b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    //printf("%.12f", ans);
}