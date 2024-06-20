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
  ll ans = 100;

  for (ll bit = 0; bit < (1 << n); ++bit) {
    vector<ll> S;
    for (ll i = 0; i < n; ++i) {
      if (bit & (1 << i)) { // 列挙に i が含まれるか
        S.push_back(i);
      }
    }
    vector<ll> check(m, 0);
    for (ll i = 0; i < (ll)S.size(); ++i) {
      rep1(j, m) {
        if (s[S[i]][j] == 'o')
          check[j] = 1;
      }
    }
    ll cnt = 0;
    rep1(j, m) cnt += check[j];
    if (cnt == m)
      ans = min(ans, ll(S.size()));
  }

  cout << ans << endl;
  // printf("%.12f", ans);
}
