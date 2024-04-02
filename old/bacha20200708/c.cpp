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
    ll n, sum=0, ans;
    cin >> n;
    vector<ll> a(n+2, 0);
    rep2(i, 1, n+1){
        cin >> a[i];
        sum += abs(a[i]-a[i-1]);
    }
    sum += abs(a[n+1]-a[n]);
    rep2(i, 1, n+1){
        ans = sum + abs(a[i-1]-a[i+1]) - (abs(a[i-1]-a[i]) + abs(a[i]-a[i+1]));
        cout << ans << endl;
    }
}