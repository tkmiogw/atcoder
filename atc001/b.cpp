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

ll par[100001];

void init(ll n) { rep1(i, n + 1) par[i] = 0; }

ll root(ll x) {
  if (par[x] == x) {
    return x;
  } else {
    return par[x] = root(par[x]);
  }
}

bool same(ll x, ll y) { return root(x) == root(y); }

void unite(ll x, ll y) {
  x = root(x);
  y = root(y);
  if (x == y)
    return;
  par[x] = y;
}

int main() {
  ll n, q, p, a, b;
  cin >> n >> q;
  init(q);
  rep1(i, q) {
    cin >> p >> a >> b;
    cout << "query " << i << endl;
    if (p == 0) {
      unite(a, b);
    } else {
      bool ans = same(a, b);
      if (ans) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}
