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
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep1(i, n) cin >> x[i] >> y[i];
    int ans = 0;
    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            int res = pow(x[i]-x[j], 2.0) + pow(y[i]-y[j], 2.0);
            ans = max(ans, res);
        }
    }
    cout << fixed << setprecision(6) << sqrt(ans) << endl;
}