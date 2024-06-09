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
  string s;
  cin >> s;
  ll n = s.size(), cnt = 0;
  rep1(i, n) {
    if (isupper(s[i]))
      cnt++;
  }
  if (cnt > n / 2) {
    rep1(i, n) {
      if (islower(s[i]))
        s[i] = s[i] - 32;
    }
  } else {
    rep1(i, n) {
      if (isupper(s[i]))
        s[i] += 32;
    }
  }
  cout << s << endl;
  // printf("%.12f", ans);
}
