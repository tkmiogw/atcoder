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
  vector<string> s(n);
  rep1(i, n) cin >> s[i];
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    for (ll j = i+1; j < n; j++) {
      bool can = true;
      for (ll k = 0; k<m; k++) {
        if (s[i][k] == 'x' && s[j][k] == 'x') {
          can = false;
          break;
        }
      }
      if (can) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}


