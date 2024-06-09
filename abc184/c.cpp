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
  ll r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  ll dx = abs(r1 - r2), dy = abs(c1 - c2);
  if (dx == 0 && dy == 0) {
    cout << 0 << endl;
    return 0;
  }
  if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 || dx + dy <= 3) {
    cout << 1 << endl;
    return 0;
  }
  if ((r1 + r2 + c1 + c2) % 2 == 0 || abs(dx - dy) <= 3 || abs(dx + dy) <= 3 ||
      dx + dy <= 6) {
    cout << 2 << endl;
    return 0;
  }
  cout << 3 << endl;
}
