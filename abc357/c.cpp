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
  ll cnt = 0;
  vector<string> ans = {"#"};

  while (n > 0) {
    ll cnth = ans.size();
    rep1(i, cnth) ans[i] += ans[i] + ans[i];
    for (ll i = cnth; i < (cnth * 3); i++)
      ans.push_back(ans[i % ll(pow(3, cnt))]);
    cnth = ans.size();
    ll cntw = ans[0].size();
    rep1(i, cnth) {
      rep1(j, cntw) {
        if (i / ll(pow(3, cnt)) == 1 && j / ll(pow(3, cnt)) == 1)
          ans[i][j] = '.';
      }
    }
    cnt++;
    n--;
  }

  ll h = ans.size();
  ll w = ans[0].size();
  rep1(i, h) {
    rep1(j, w) { cout << ans[i][j]; }
    cout << endl;
  }
  // printf("%.12f", ans);
}
