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
    ll h, w, k;
    cin >> h >> w >> k;
    vector<string> a(h), b(h);
    rep1(i, h){
        cin >> a[i];
    }
    ll res = 0, ans = 0;
    for (int bit = 0; bit < (1<<h+w); ++bit) {
        b = a;
        res = 0;
        for (int i = 0; i < h+w; ++i) {
            if (bit & (1 << i)){
                if (i < h){
                    rep1(j, w) b[i][j] = '.';
                }
                else{
                    rep1(j, h) b[j][i-h] = '.';
                }
            }
        }
        rep1(i, h){
            rep1(j, w){
                if (b[i][j] == '#') res++;
            }
        }
        if (res == k) ans++;
    }
    cout << ans << endl;
}