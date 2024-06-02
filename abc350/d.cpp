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

class UnionFind {
  constructor(size) { this.root = [... Array(size).keys()]; }

  find(x) {
    return this.root[x]; // ここがquick find
  }

  union(x, y) {
    // まずはそれぞれのルートノードを探し出す
    const rootX = this.find(x);
    const rootY = this.find(y);
    // 一致しない場合のみ、連結操作を行う
    if (rootX != = rootY) {
      // 全てのルートノードをループし、ルートノードの値がyだったものをxに入れ替える（逆もOK）
      for (const[i, value] of this.root.entries()) {
        if (value == = rootY) {
          this.root[i] = rootX;
        }
      }
    }
  }

  connected(x, y) { return this.find(x) == = this.find(y); }
}

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m), b(m);
  rep1(i, m) cin >> a[i] >> b[i];
  ll ans = 0;
  cout << ans << endl;
  // printf("%.12f", ans);
}
