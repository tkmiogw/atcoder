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
  string s, t;
  cin >> s >> t;

  ll ndx = 0;
  for (ll i = 0; i < (t.length()); i++) {
    if (s[ndx] == t[i]) {
      cout << i + 1;
      ndx++;

      if (ndx == s.length()) {
        break;
      } else {
        cout << " ";
      }
    }
  }
}
