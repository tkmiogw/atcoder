#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
#define rep1(i, n) for (ll i = 0; i < (n); i++)
#define rep2(i, k, n) for (ll i = k; i < (n); i++)
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return 1;
  }
  return 0;
}

bool check_exists(string &s, ll x)
{
  for (ll i = 0; i < 10; i++)
  {
    ll x_copy = x;
    if (s[i] == 'o')
    {
      bool found = false;
      for (ll j = 0; j < 4; j++)
      {
        if (x_copy % 10 == i)
        {
          found = true;
          break;
        }
        x_copy /= 10;
      }
      if (!found)
      {
        return false;
      }
    }
    else if (s[i] == 'x')
    {
      for (ll j = 0; j < 4; j++)
      {
        if (x_copy % 10 == i)
        {
          return false;
        }
        x_copy /= 10;
      }
    }
  }
  return true;
}

int main()
{
  string s;
  cin >> s;
  ll ans = 0;
  for (ll x = 0; x < 10000; x++)
  {
    if (check_exists(s, x))
    {
      ans++;
    }
  }

  cout << ans << endl;
  // printf("%.12f", ans);
}
