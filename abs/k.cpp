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
  ll tb = 0, xb = 0, yb = 0, n;
  cin >> n;

  ll t, x, y;
  rep1(i, n) {
    cin >> t >> x >> y;
    if (abs(x - xb) + abs(y - yb) > abs(t - tb) ||
        (abs(x - xb) + abs(y - yb)) % 2 != abs(t - tb) % 2) {
      cout << "No" << endl;
      return 0;
    }
    tb = t, xb = x, yb = y;
  }
  cout << "Yes" << endl;
  // printf("%.12f", ans);
}
