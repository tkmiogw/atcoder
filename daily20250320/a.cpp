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
  vector<ll> a(5, 0);
  rep1(i, 5) cin >> a[i];
  ll cnt = 0;
  rep1(i, 4) if (a[i] >= a[i + 1]) {
    swap(a[i], a[i + 1]);
    cnt++;
    break;
  }
  if (cnt == 0) {
    cout << "No" << endl;
    return 0;
  }
  rep1(i, 4) if (a[i] >= a[i + 1]) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}


