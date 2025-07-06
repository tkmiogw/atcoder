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

int main()
{
  ll n;
  cin >> n;
  vector<string> s(n);
  rep1(i, n) cin >> s[i];

  map<string, ll> mp;
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      string t = s[i] + s[j];
      if (mp.find(t) == mp.end())
      {
        mp[t] = 1;
      }
      else
      {
        mp[t]++;
      }
    }
  }

  cout << mp.size() << endl;
  // printf("%.12f", ans);
}
