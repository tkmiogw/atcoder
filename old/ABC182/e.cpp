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
    ll h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<vector<ll>> mas(h, vector<ll>(w));
    vector<ll> a(n), b(n);
    rep1(i, n){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        mas[a[i]][b[i]] = 2;
    }
    rep1(i, m){
        ll c, d;
        cin >> c >> d;
        c--;
        d--;
        mas[c][d] = -1;
    }
    rep1(i, n){
        ll hx = a[i]+1;
        while (hx<h){
            if (mas[hx][b[i]]==2||mas[hx][b[i]]==-1) break;
            mas[hx][b[i]] = 1;
            hx++;
        }
        hx = a[i]-1;
        while (hx>-1){
            if (mas[hx][b[i]]==2||mas[hx][b[i]]==-1) break;
            mas[hx][b[i]] = 1;
            hx--;
        }
        ll wy = b[i]+1;
        while (wy<w){
            if (mas[a[i]][wy]==2||mas[a[i]][wy]==-1) break;
            mas[a[i]][wy] = 1;
            wy++;
        }
        wy = b[i]-1;
        while (wy>-1){
            if (mas[a[i]][wy]==2||mas[a[i]][wy]==-1) break;
            mas[a[i]][wy] = 1;
            wy--;
        }
    }
    ll ans = 0;
    rep1(i, h) rep1(j, w){
        if (mas[i][j]>0) ans++;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}