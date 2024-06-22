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

// 1 以上 N 以下の整数が素数かどうかを返す
vector<bool> Eratosthenes(ll N) {
  // テーブル
  vector<bool> isprime(N + 1, true);

  // 0, 1 は予めふるい落としておく
  isprime[0] = isprime[1] = false;

  // ふるい
  for (ll p = 2; p <= N; ++p) {
    // すでに合成数であるものはスキップする
    if (!isprime[p])
      continue;

    // p 以外の p の倍数から素数ラベルを剥奪
    for (ll q = p * 2; q <= N; q += p) {
      isprime[q] = false;
    }
  }

  // 1 以上 N 以下の整数が素数かどうか
  return isprime;
}

ll comb(ll n, ll r) {
  if (n == r || r == 0)
    return 1;
  else
    return comb(n, r - 1) * (n - r + 1) / r;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> p;
  vector<bool> isprime = Eratosthenes(300000);
  for (ll i = 1; i < 300000; i++) {
    if (isprime[i]) {
      p.push_back(i);
    }
  }
  vector<ll> s = {0, 0};
  for (ll i = 2; i < p.size(); i++) {
    s.push_back(p[i] * p[i] * p[i - 1] * p[i - 2] * p[i - 2]);
    if (s[i] > 1000000000000)
      break;
  }

  ll cnt = 2, ans = 0;
  while (s[cnt] < n) {
    cnt++;
  }
  ans += comb(cnt, 3);

  ll tmp = 0;
  for (ll i = cnt; i < p.size(); i++) {
    for (ll j = 1; j < i; j++) {
      for (ll k = 0; k < j; k++) {
        tmp = p[i] * p[i] * p[j] * p[k] * p[k];
        if (tmp <= n)
          ans++;
        else {
          break;
        }
      }
    }
  }

  cout << ans << endl;
  // printf("%.12f", ans);
}
