#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 4000000000;
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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans = 0;
  ll yres = (c - a) % 4;
  ll ysho = (c - a) / 4;
  ll tres = (d - b) % 4;
  ll tsho = (d - b) / 4;

  ans += ysho * tsho * 16;
  ans += ysho * tres * 4;

  // 端数を計算する
  for (ll i = c - yres; i < c; i++) {
    if ((i + INF) % 4 == 0) {
      ans += (d - b) / 2 * 3;
      if ((d - b) % 2 == 1) {
        if (d % 2 == 0)
          ans += 1;
        else
          ans += 2;
      }
    }
    if ((i + INF) % 4 == 1) {
      ans += (d - b) / 2 * 3;
      if ((d - b) % 2 == 1) {
        if (d % 2 == 0)
          ans += 2;
        else
          ans += 1;
      }
    }
    if ((i + INF) % 4 == 2) {
      ans += (d - b) / 2 * 1;
      if ((d - b) % 2 == 1) {
        if (d % 2 == 0)
          ans += 1;
        else
          ans += 0;
      }
    }
    if ((i + INF) % 4 == 3) {
      ans += (d - b) / 2 * 1;
      if ((d - b) % 2 == 1) {
        if (d % 2 == 0)
          ans += 0;
        else
          ans += 1;
      }
    }
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
