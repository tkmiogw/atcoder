#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
#define rep1(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, k, n) for (int i = k; i < (n); i++)
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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> c(m);
  vector<char> r(m);

  vector<vector<int>> a;
  rep1(i, m) {
    cin >> c[i];
    vector<int> cnt(c[i]);
    rep1(j, c[i]) cin >> cnt[j];
    a.push_back(cnt);
    cin >> r[i];
  }
  int ans = 0;
  for (int bit = 0; bit < (1 << n); bit++) {
    bool is_ng = false;
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        cnt[i] = 1;
      }
    }
    for (int i = 0; i < (m); i++) {
      ll sum = 0;
      for (int j = 0; j < (c[i]); j++) {
        sum += cnt[a[i][j] - 1];
      }
      if ((r[i] == 'o' && sum < k) || (r[i] == 'x' && sum >= k))
        is_ng = true;
    }
    if (!is_ng)
      ans++;
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
