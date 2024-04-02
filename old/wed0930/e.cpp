#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll h, w;
vector<string> s;

void dfs(vector<vector<ll> > &dist, ll x, ll y, vector<P> next) {
    rep1(i, 4) {
        ll nx = x + next[i].first;
        ll ny = y + next[i].second;
        if (nx<0 || nx>=h || ny<0 || ny>=w) continue;
        if (dist[nx][ny]>dist[x][y]+1 && s[nx][ny]=='.'){
            dist[nx][ny] = dist[x][y]+1;
            dfs(dist, nx, ny, next);
        }
    }
}

int main() {
    cin >> h >> w;
    vector<vector<ll> > dist(h, vector<ll>(w, INF));
    ll b = 0;
    s.resize(h);
    rep1(i, h){
        cin >> s[i];
        rep1(j, w) if (s[i][j]=='#') b++;
    }
    vector<P> next(4);
    next[0] = make_pair(1, 0);
    next[1] = make_pair(-1, 0);
    next[2] = make_pair(0, 1);
    next[3] = make_pair(0, -1);
    dist[0][0] = 1;
    dfs(dist, 0, 0, next);
    ll ans = h*w - b - dist[h-1][w-1]; 
    if (dist[h-1][w-1]==INF) ans = -1;
    cout << ans << endl;
    //printf("%.12f", ans);
}