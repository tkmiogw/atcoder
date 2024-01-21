#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1e6;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> l(n+2, 0), r(n+2, 0);
    rep1(i, n){
        if (i==0){
            if (s[i]=='#') l[i+1]++;
            if (s[n-1-i]=='.') r[n-i]++;
        }
        else{
            l[i+1] = l[i];
            r[n-i] = r[n-i+1];
            if (s[i]=='#') l[i+1]++;
            if (s[n-1-i]=='.') r[n-i]++;
        }
    }
    //ll ans = INF;
    ll ans = l[0]+r[1];
    for (ll i=0; i<(n+1); i++){
        ans = min(ans, l[i]+r[i+1]);
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}