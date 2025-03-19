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
  ll sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  ll conv =
      (ll)(((sy % 2 + 2) % 2 == 0 && sx > tx && (sx % 2 + 2) % 2 == 1) || // 左
           ((sy % 2 + 2) % 2 == 0 && sx < tx && (sx % 2 + 2) % 2 == 0) || // 右
           ((sy % 2 + 2) % 2 == 1 && sx > tx && (sx % 2 + 2) % 2 == 0) || // 左
           ((sy % 2 + 2) % 2 == 1 && sx < tx && (sx % 2 + 2) % 2 == 1));  // 右
  ll ans = abs(sy - ty) +
           max((ll)0, (abs(sx - tx) - abs(sy - ty) - conv) / 2 +
                          (ll)((abs(sx - tx) - abs(sy - ty) - conv) % 2 == 1));

  cout << ans << endl;
  // printf("%.12f", ans);
}
