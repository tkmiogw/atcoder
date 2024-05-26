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
  ll n, y;
  cin >> n >> y;
  for (ll i = 0; i <= (y / 10000); i++) {
    for (ll j = 0; j <= ((y - 10000 * i) / 5000); j++) {
      ll k = (y - 10000 * i - 5000 * j) / 1000;
      if (i + j + k == n) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}
