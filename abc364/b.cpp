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
  ll h, w, s, t;
  cin >> h >> w >> s >> t;
  s--, t--;
  vector<string> c(h);
  rep1(i, h) cin >> c[i];
  string x;
  cin >> x;

  rep1(i, (ll)x.size()) {
    char ts = x[i];
    if (ts == 'L') {
      if (t - 1 >= 0)
        if (c[s][t - 1] == '.') {
          t = t - 1;
        }
    }
    if (ts == 'R') {
      if (t + 1 < w)
        if (c[s][t + 1] == '.') {
          t = t + 1;
        }
    }
    if (ts == 'U') {
      if (s - 1 >= 0)
        if (c[s - 1][t] == '.') {
          s = s - 1;
        }
    }
    if (ts == 'D') {
      if (s + 1 < w)
        if (c[s + 1][t] == '.') {
          s = s + 1;
        }
    }
  }
  cout << s + 1 << " " << t + 1 << endl;
  // printf("%.12f", ans);
}
