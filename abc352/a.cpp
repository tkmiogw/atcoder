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
  ll n, x, y, z;
  cin >> n >> x >> y >> z;
  bool ans = (x < z and z < y) or (y < z and z < x);
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  // printf("%.12f", ans);
}
