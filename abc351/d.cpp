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
  vector<string> s(h);
  rep1(i, h) cin >> s[i];

  vector<vector<ll>> v(h, vector(w, 0)), u(h, vector(w));

  rep1(i, h) rep1(j, w) {
    if (s[i][j] == '#')
      break;
    // はみ出る場合の考慮ができていない
    if (s[i - 1][j] == '.' and s[i][j - 1] == '.' and s[i + 1][j] == '.' and
        s[i][j + 1] == '.') {
      v[i][j] == 1;
    }
  }

  ll ans = 0;
  cout << ans << endl;
  // printf("%.12f", ans);
}
