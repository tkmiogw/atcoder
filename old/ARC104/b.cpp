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
    string s;
    cin >> s;
    vector<vector<ll> > a(n+1, vector<ll>(2));
    for (ll i=1; i<(n+1); i++){
        a[i][0] = a[i-1][0];
        a[i][1] = a[i-1][1];
        if (s[i-1]=='A') a[i][0]++;
        else if (s[i-1]=='T') a[i][0]--;
        else if (s[i-1]=='C') a[i][1]++;
        else if (s[i-1]=='G') a[i][1]--;
    }
    ll ans = 0;
    for (ll i=0; i<(n+1); i++){
        for (ll j=i+1; j<(n+1); j++){
            if (a[j][0]==a[i][0] && a[j][1]==a[i][1]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}