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
  ll n, k;
  cin >> n >> k;
  vector<vector<ll>> p(n, vector<ll>(2));
  rep1(i, n) {
    cin >> p[i][0];
    p[i][1] = i;
  }
  sort(p.begin(), p.end());
  set<ll> s;
  rep1(i, k - 1) s.insert(p[i][1]);
  ll ans = INF;
  for (ll i = 0; i + k - 1 < (n); i++) {
    s.insert(p[i + k - 1][1]);
    ans = min(ans, *s.rbegin() - *s.begin());
    s.erase(p[i][1]);
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
