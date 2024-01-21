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
    string n;
    cin >> n;
    vector<ll> a;
    for (char x: n) a.push_back(x - '0');
    ll sum = 0;
    map<ll,ll> m;
    for (ll x: a){
        m[x]++;
        sum += x;
    }
    ll ans = 100;
    for (ll bit = 0; bit < (1<<n.size()); ++bit) {
        ll res = sum;
        ll cnt = 0;
        for (ll i = 0; i < n.size(); ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                cnt++;
                res -= a[i];
            }
        }
        if ((ll)n.size()==cnt) continue; 
        if (res%3==0 && cnt<ans) ans = cnt;
    }
    if (ans==100) ans = -1;
    cout << ans << endl;
    //printf("%.12f", ans);
}