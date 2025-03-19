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
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  vector<int> l = {(xb - xc) * (xb - xc) + (yb - yc) * (yb - yc),
                   (xa - xc) * (xa - xc) + (ya - yc) * (ya - yc),
                   (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)};
  sort(l.begin(), l.end());
  if (l[0] + l[1] == l[2]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  // printf("%.12f", ans);
}
