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
    ll cnt = 0;
    ll unh = 0;
    bool flag = false;
    rep1(i, n-1) if (s[i]=='R' && s[i+1]=='L'){
        cnt++;
        unh+=2;
    }
    if (s[0]=='L'){
        unh++;
    }
    if (s[n-1]=='R'){
        flag = true;
        unh++;
    }
    ll ans = n - unh + 2*min(k, cnt) + (cnt<k && flag);
    ans = min(n-1, ans);
    cout << ans << endl;
    //printf("%.12f", ans);
}