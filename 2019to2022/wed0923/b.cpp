#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1e9+7;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    rep1(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ai = a[a.size()-1];
    ll aj;
    P p = make_pair(INF, 0);
    rep1(i, n-1){
        if (p.first>abs(ai-a[i]*2)){
            p = make_pair(abs(ai-a[i]*2), a[i]);
        }
    }
    aj = p.second;
    cout << ai << " " << aj << endl;
    //printf("%.12f", ans);
}