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
  vector<ll> l(n, 0), r(n, 0), x(n, 0);
  ll sl = 0, sr = 0, sv = 0;
  rep1(i, n) {
    cin >> l[i] >> r[i];
    sl += l[i];
    sr += r[i];
    if (l[i] > 0) {
      x[i] = l[i];
    }
    if (r[i] < 0) {
      x[i] = r[i];
    }
    sv += x[i];
  }

  if (sl <= 0 && 0 <= sr) {
    cout << "Yes" << endl;
    rep1(i, n) {
      ll xt = 0;
      if (sv < 0 && r[i] > 0) {
        xt = min(sv * -1, r[i] - x[i]);
        xt = max((ll)0, xt);
        sv += xt;
        x[i] += xt;
      } else if (sv > 0 && l[i] < 0) {
        xt = max(sv * -1, l[i] - x[i]);
        xt = min((ll)0, xt);
        sv += xt;
        x[i] += xt;
      }
    }
    rep1(i, n) {
      if (i == 0)
        cout << x[i];
      else
        cout << " " << x[i];
    }
    cout << endl;
  } else {
    cout << "No" << endl;
  }
  // printf("%.12f", ans);
}
