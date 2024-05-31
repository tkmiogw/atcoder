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

struct Card {
  int a;
  int c;
  int index;
};

int main() {
  int n;
  cin >> n;
  vector<Card> cards(n);
  rep1(i, n) {
    int a, c;
    cin >> a >> c;
    cards[i] = {a, c, i + 1};
  }
  sort(cards.begin(), cards.end(),
       [&](const auto &l, const auto &r) { return l.c < r.c; });

  vector<int> ans;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (cards[i].a > cnt) {
      cnt = cards[i].a;
      ans.push_back(cards[i].index);
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  rep1(i, ans.size()) cout << ans[i] << " ";
  // printf("%.12f", ans);
}
