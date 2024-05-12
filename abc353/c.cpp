#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
const ll MOD = 100000000;
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

bool isOK(ll index, ll key, vector<ll> a) {
  if (a[index] >= key)
    return true;
  else
    return false;
}

// 汎用的な二分探索のテンプレ
ll binary_search(ll key, vector<ll> a) {
  ll left = -1; // 「index = 0」が条件を満たすこともあるので、初期値は -1
  ll right = (ll)a.size(); // 「index =
                           // a.size()-1」が条件を満たさないこともあるので、初期値は
                           // a.size()

  /* どんな二分探索でもここの書き方を変えずにできる！ */
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;

    if (isOK(mid, key, a))
      right = mid;
    else
      left = mid;
  }

  /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている
   */
  return right;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  ll suma = 0;
  for (ll i = 0; i < (n); i++) {
    cin >> a[i];
    suma = suma + a[i];
  }
  // ここから超過回数をカウントしていく
  sort(a.begin(), a.end());
  // 小さい順から参照していき, MOD以上になる最小の数を二分探索する
  ll cnt = 0;
  for (ll i = 0; i < (n); i++) {
    ll key = MOD - a[i];
    ll mid = n - binary_search(key, a);
    if (a[i] * 2 > MOD)
      cnt += mid - 1;
    else
      cnt += mid;
  }
  cout << suma * (n - 1) - cnt / 2 * MOD << endl;
  // printf("%.12f", ans);
}
