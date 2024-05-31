#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
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
  ll n;
  cin >> n;
  vector<ll> l(n), r(n);
  rep1(i, n) {
    cin >> l[i];
    cin >> r[i];
  }
  sort(l.begin(), l.end());
  sort(r.begin(), r.end());
  ll ans = n * (n - 1) / 2;
  ll j = 0;
  for (ll i = 0; i < n; i++) {
    while (r[j] < l[i])
      j++;
    ans -= j;
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
