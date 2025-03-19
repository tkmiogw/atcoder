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
  ll n, x, y;
  cin >> n >> x >> y;
  vector<ll> a(n, 0), b(n, 0);
  rep1(i, n) cin >> a[i];
  rep1(i, n) cin >> b[i];
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  int ansa = 0, ansb = 0;
  ll cnt = 0;
  rep1(i, n) {
    cnt += a[i];
    ansa++;
    if (cnt > x)
      break;
  }

  cnt = 0;
  rep1(i, n) {
    cnt += b[i];
    ansb++;
    if (cnt > y)
      break;
  }
  cout << min(ansa, ansb) << endl;
  // printf("%.12f", ans);
}
