#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
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
  int n;
  cin >> n;
  vector<int> a(n), pos(n + 10);
  vector<int> ansa, ansb;
  rep1(i, n) {
    cin >> a[i];
    pos[a[i]] = i;
  }

  rep1(i, n) {
    if (a[i] != i + 1) {
      int j = pos[i + 1];
      pos[a[i]] = j;
      a[j] = a[i];
      a[i] = i + 1;
      ansa.push_back(i + 1);
      ansb.push_back(j + 1);
    }
  }
  int s = ansa.size();
  cout << s << endl;
  if (s > 0) {
    rep1(i, s) cout << ansa[i] << " " << ansb[i] << endl;
  }
}
// printf("%.12f", ans);
