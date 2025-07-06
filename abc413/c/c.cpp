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
  ll q;
  cin >> q;
  deque<P> dq;
  rep1(i, q)
  {
    ll t;
    cin >> t;
    if (t == 1)
    {
      ll c, x;
      cin >> c >> x;
      P p = {x, c};
      dq.push_back(p);
    }
    else if (t == 2)
    {
      ll k;
      cin >> k;
      ll s = 0;
      while (k > 0 && !dq.empty())
      {
        P p = dq.front();
        dq.pop_front();
        if (p.second <= k)
        {
          s += p.first * p.second;
          k -= p.second;
        }
        else
        {
          s += p.first * k;
          p.second -= k;
          dq.push_front(p);
          k = 0;
        }
      }
      cout << s << endl;
    }
  }
}
