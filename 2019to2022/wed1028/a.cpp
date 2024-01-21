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
    string s;
    cin >> s;
    string num = "01234567890";
    ll ans = 0;
    rep1(i, 10) rep1(j, 10) rep1(k, 10){
        ll cnt = 0;
        rep1(l, n){
            if (cnt==0 && num[i]==s[l]){
                cnt++;
                continue;
            }
            if (cnt==1 && num[j]==s[l]){
                cnt++;
                continue;
            }
            if (cnt==2 && num[k]==s[l]){
                cnt++;
                break;
            }
        }
        if (cnt==3) ans++;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}