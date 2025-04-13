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
  ll n, m, s_max=0;
  cin >> n >> m;
  vector<ll> a(m, 0), sc(n, 0);
  rep1(i, m) cin >> a[i];
  vector<string> s(n);
  rep1(i, n) {
    cin >> s[i];
    rep1(j, m) {
      if (s[i][j] == 'o') sc[i] += a[j];
    }
    sc[i]+=i+1;
    s_max = max(s_max, sc[i]);
  }

  rep1(i, n) {
    if (sc[i] == s_max) {
      cout << 0 << endl;
      continue;
    }
    vector<ll> rp;
    rep1(j, m) {
      if (s[i][j] == 'x') rp.push_back(a[j]);
    }
    sort(rp.begin(), rp.end(), greater<ll>());
    ll ans = 0, sum = sc[i];
    for (ll j = 0; j < rp.size(); j++) {
      sum += rp[j];
      ans++;
      if (sum >= s_max) break;
    }
    cout << ans << endl;
  }
}


