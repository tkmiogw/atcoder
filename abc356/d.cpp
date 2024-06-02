#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
const ll MOD = 998244353;
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
  ll n, m;
  cin >> n >> m;

  ll ans = 0;
  for (ll i = 0; i < 61; ++i) {
    if (m & (1LL << i)) {
      ll p2 = 1LL << i;
      ll k = n / (2 * p2);
      ans += k * p2;
      ll cnt = n % (p2 * 2);
      if (cnt >= p2)
        ans += (cnt - p2 + 1);
      ans %= MOD;
    }
  }
  while (ans < 0)
    ans += MOD;
  cout << ans << endl;
  // printf("%.12f", ans);
}
