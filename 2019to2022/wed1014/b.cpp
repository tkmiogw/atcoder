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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a;
    if (s[0]=='0') a.push_back(0);
    for (ll i=0; i<(n);){
        ll j = i;
        while (j<n && s[j]==s[i]) j++;
        a.push_back(j-i);
        i = j;
    }
    if (s.back() == '0') a.push_back(0);
    vector<ll> sum((ll)a.size()+1, 0);
    rep1(i, (ll)sum.size()) sum[i+1] = sum[i] + a[i];

    ll ans = 0;
    for (ll i=0; i<(ll)sum.size(); i+=2){
        ll j = i + k*2+1;
        if (j >= (ll)sum.size()) j = (ll)sum.size() - 1;
        ans = max(ans, sum[j]-sum[i]);
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}