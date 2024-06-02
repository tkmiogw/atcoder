#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
#define rep1(i, n) for (ll i = 0; i < (n); i++)
#define rep2(i, k, n) for (ll i = k; i < (n); i++)
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  ll h, w;
  cin >> h >> w;
  vector<string> c(h);
  rep1(i, h) cin >> c[i];
  vector<vector<bool>> visited(1000, vector<ll>(1000, false));

  void search(ll x, ll y) {
    if (x < 0 || w <= x || y < 0 || h <= y || c[x][y] == '#')
      return;
    if (visited[x][y])
      return;
    search(x + 1, y);
    search(x - 1, y);
    search(x, y + 1);
    search(x, y - 1);
  }
  ll sx, sy, gx, gy;
  rep1(i, h) {
    rep1(j, w) {
      if (c[i][j] == 's') {
        sx = j;
        sy = i;
      }
      if (c[i][j] == 'g') {
        gx = j;
        gy = i;
      }
    }
  }
  search(sx, sy);
  if (visited[gx][gy])
    cout << ans << endl;
  // printf("%.12f", ans);
}
