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
  ll ans = 1;
  ll a;
  ll cap = 0;
  rep1(i, n) {
    cin >> a;
    if (cap + a > k) {
      ans++;
      cap = a;
    } else {
      cap += a;
    }
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
