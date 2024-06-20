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

void search(ll x, ll y, ll w, ll h, vector<string> &c,
            vector<vector<bool>> &visited) {
  if (x < 0 || h <= x || y < 0 || w <= y) {
    return;
  } else if (c[x][y] == '#') {
    return;
  }
  if (visited[x][y])
    return;
  visited[x][y] = true;
  search(x + 1, y, w, h, c, visited);
  search(x - 1, y, w, h, c, visited);
  search(x, y + 1, w, h, c, visited);
  search(x, y - 1, w, h, c, visited);
}

int main() {
  ll h, w;
  cin >> h >> w;
  vector<string> c(h);
  rep1(i, h) cin >> c[i];
  vector<vector<bool>> visited(600, vector<bool>(600, false));

  ll si = 0, sj = 0, gi = 0, gj = 0;
  rep1(i, h) {
    rep1(j, w) {
      if (c[i][j] == 's') {
        si = i;
        sj = j;
      }
      if (c[i][j] == 'g') {
        gi = i;
        gj = j;
      }
    }
  }
  search(si, sj, w, h, c, visited);
  if (visited[gi][gj])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  // printf("%.12f", ans);
}
