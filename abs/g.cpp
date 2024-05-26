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
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  rep1(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  ll ans_a = 0, ans_b = 0;
  rep1(i, n) {
    if (i % 2 == 0)
      ans_a += a[i];
    else
      ans_b += a[i];
  }
  cout << max(ans_a, ans_b) - min(ans_a, ans_b) << endl;
  // printf("%.12f", ans);
}
