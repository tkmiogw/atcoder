#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
const ll MOD = 998244353;
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

ll GetDigit(ll num) {
  ll digit = 0;

  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

ll modpow(ll n, ll k) {
  ll res = 1;
  while (k) {
    if (k & 1) {
      res = (res * n) % MOD;
    }
    n = (n * n) % MOD;
    k >>= 1;
  }
  return res;
}

ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0)
    u += MOD;
  return u;
}

int main() {
  ll n;
  cin >> n;
  ll ans = 0, d = GetDigit(n), m = modpow(10, d) % MOD;
  ans = (n % MOD) * ((modpow(m, n) - 1) % MOD) % MOD;
  ans = ans * modinv(m - 1) % MOD;
  if (ans < 0)
    ans += MOD;
  cout << ans << endl;
}
