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

string devide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  rep1(i, 4) reverse(devide[i].begin(), devide[i].end());

  bool ans = true;
  for (ll i = 0; i < S.size();) {
    bool cnt = false;
    rep1(j, 4) {
      if (S.substr(i, devide[j].size()) == devide[j]) {
        cnt = true;
        i += devide[j].size();
      }
    }
    if (!cnt) {
      ans = false;
      break;
    }
  }
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
