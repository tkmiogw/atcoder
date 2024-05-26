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
  ll a, b, c, x;
  cin >> a >> b >> c >> x;
  ll ans = 0;
  for (ll i = min(x / 500, a); i >= 0; i--) {
    for (ll j = min((x - 500 * i) / 100, b); j >= 0; j--) {
      if ((x - 500 * i - 100 * j) / 50 <= c) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
