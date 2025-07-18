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
  ll n, a, b;
  ll aoki = 0, taka = 0;
  cin >> n;
  vector<vector<ll>> c(n);
  rep1(i, n) {
    cin >> a >> b;
    aoki += a;
    c[i] = {a * 2 + b, a + b, a};
  }
  sort(c.rbegin(), c.rend());
  ll ans = 0;
  for (auto &p : c) {
    aoki -= p[2];
    taka += p[1];
    ans++;
    if (aoki < taka)
      break;
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
