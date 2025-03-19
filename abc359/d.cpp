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

bool kaibun(string &s) {
  ll l = s.size();
  for (ll i = 0; i < l / 2; i++) {
    if
      if (s[i] != s[l - 1 - i])
        return false;
  }
  return true;
}

int main() {
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<ll> a(n, 0);
  rep1(i, n) cin >> a[i];
  ll ans = 0;
  cout << ans << endl;
  // printf("%.12f", ans);
}
