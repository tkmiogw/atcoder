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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n, 0), b(m, 0);
  rep1(i, n) cin >> a[i];
  rep1(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll ans = 0;
  ll aa = 0, bb = 0;
  while (aa < n) {
    if (a[aa] >= b[bb]) {
      ans += a[aa];
      bb++;
    }
    if (!(bb < m)) {
      cout << ans << endl;
      return 0;
    }
    aa++;
  }
  cout << -1 << endl;
  // printf("%.12f", ans);
}
