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
  vector<ll> kaijo(1001, 1);
  for (ll i = 1; i <= 1000; i++) {
    kaijo[i] = i * kaijo[i] % MOD;
  }
  ll k;
  cin >> k;
  vector<ll> c;
  ll s = 0;
  rep1(i, 26) {
    ll cnt;
    cin >> cnt;
    if (cnt > 0)
      c.push_back(cnt);
    s += cnt;
  }
  sort(c.begin(), c.end());

  ll ans = 0;
  rep1(i, (ll)min(k, s)) {
    ans++;
    ans++;
  }

  cout << ans << endl;
  // printf("%.12f", ans);
}
