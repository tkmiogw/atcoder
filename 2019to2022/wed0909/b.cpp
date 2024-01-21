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
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep1(i, h) cin >> s[i];
    vector<P> G;
    G.push_back(make_pair(1, 0));
    G.push_back(make_pair(-1, 0));
    G.push_back(make_pair(0, 1));
    G.push_back(make_pair(0, -1));
    ll ans = 0;
    rep1(i, h) rep1(j, w){
        vector<vector<ll> > dist(h, vector<ll>(w, -1));
        queue<P> que;
        if (s[i][j]=='.'){
            dist[i][j] = 0; que.push(make_pair(i, j));
            while (!que.empty()){
                P v = que.front(); que.pop();
                ans = max(ans, dist[v.first][v.second]);
                for (auto nv: G){
                    ll x = v.first+nv.first, y = v.second+nv.second;
                    if (x>=0 && x<h && y>=0 && y<w && s[x][y]=='.' && dist[x][y]==-1){
                        dist[x][y] = dist[v.first][v.second] + 1;
                        que.push(make_pair(x, y));
                    }
                }
            }
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}