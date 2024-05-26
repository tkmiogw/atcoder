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
  cin >> n >> a >> b;
  ll ans = 0;
  for (ll i = 1; i < (n + 1); i++) {
    ll tmp = i;
    ll cnt = 0;
    while (tmp > 0) {
      cnt += tmp % 10;
      tmp /= 10;
    }

    if (a <= cnt && cnt <= b) {
      ans += i;
    }
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
