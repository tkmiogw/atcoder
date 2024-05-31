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
  int n, t, a, i, j;
  cin >> n >> t;
  map<int, int> tate;
  map<int, int> yoko;
  map<int, int> naname = {{0, 0}, {1, 0}};
  rep1(k, t) {
    cin >> a;
    a--;
    i = a % n;
    j = a / n;
    if (tate.find(i) != tate.end())
      tate[i] += 1;
    else
      tate[i] = 1;
    if (tate[i] == n) {
      cout << k + 1 << endl;
      return 0;
    }

    if (yoko.find(j) != yoko.end())
      yoko[j] += 1;
    else
      yoko[j] = 1;
    if (yoko[j] == n) {
      cout << k + 1 << endl;
      return 0;
    }
    if (i == j)
      naname[0] += 1;
    if (naname[0] == n) {
      cout << k + 1 << endl;
      return 0;
    }
    if (n - 1 - i == j)
      naname[1] += 1;
    if (naname[1] == n) {
      cout << k + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  // printf("%.12f", ans);
}
