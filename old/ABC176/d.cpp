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
    ll h, w, ch, cw, dh, dw;
    cin >> h >> w >> ch >> cw >> dh >> dw;
    ch--, cw--, dh--, dw--;
    vector<string> s(h);
    rep1(i, h) cin >> s[i];
    vector<P> d;
    d.push_back(make_pair(1, 0));
    d.push_back(make_pair(-1, 0));
    d.push_back(make_pair(0, 1));
    d.push_back(make_pair(0, -1));
    queue<P> q, old;
    vector<vector<ll> > visit(h, vector<ll>(w, -1));
    q.push(make_pair(ch, cw));
    visit[ch][cw]++;
    while (!q.empty()){
        P xy = q.front(); q.pop();
        ll x = xy.first, y = xy.second;
        rep1(i, 4){
            ll nx = x+d[i].first, ny = y+d[i].second;
            if (nx>=0 && nx<h && ny>=0 && ny<w) {
                if (visit[nx][ny]==-1 && s[nx][ny]=='.') {
                    visit[nx][ny] = visit[x][y];
                    q.push(make_pair(nx, ny));
                }
            }
        }
        old.push(make_pair(x, y));
        if (q.empty()) {
            while (!old.empty()) {
                xy = old.front(); old.pop();
                x = xy.first, y = xy.second;
                for (ll i=-2; i<=2; i++) {
                    for (ll j=-2; j<=2; j++) {
                        ll nx = x+i, ny = y+j;
                        if (nx>=0 && nx<h && ny>=0 && ny<w && s[nx][ny]=='.'){
                            if (visit[nx][ny]==-1 || visit[nx][ny]>visit[x][y]+1) {
                                visit[nx][ny] = visit[x][y] + 1;
                                q.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
            }
        }
    }
    cout << visit[dh][dw] << endl;
    //printf("%.12f", ans);
}