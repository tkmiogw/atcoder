#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
const ll MOD = 998244353;
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

ll GetDigit(ll num) {
  ll digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

int main() {
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(n, 0), b(n, 0);
  rep1(i, n) {
    cin >> a[i];
    ans += a[i] * i;
  }
  sort(a.begin(), a.end());
  rep1(i, n) b[i] = GetDigit(a[i]);
  map<ll, ll> m;
  rep1(i, 15) m[i] = 0;
  m[b[n - 1]]++;
  for (ll i = n - 2 : i > -1; i--) {
    ll tmp = 0;
    rep1(j, 15) { tmp += a[i] * pow(10, j) * m[j]; }
    ans += tmp;
    m[b[i]]++;
  }
  cout << ans << endl;
  // printf("%.12f", ans);
}
