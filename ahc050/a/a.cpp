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

ll max_depth = 100;
ll get_score(ll tmp_score, ll n, ll m)
{
  double base = 10000 * m / (n * n);
  ll result = static_cast<ll>(pow(base, tmp_score));
  return result * -1; // tmp_scoreの2乗を計算して負の値を返す
}
ll get_edge_score(vector<string> &s, ll n, ll m, ll x, ll y, ll dx, ll dy, ll depth, ll score)
{
  // (x,y)から(dx,dy)方向に壁までの距離を返す
  ll dist = 0;
  depth++;
  if (depth > max_depth)
  {
    return score;
  }
  for (ll k = 0; k < n; k++)
  {
    x += dx;
    y += dy;
    if (x < 0 || x >= n || y < 0 || y >= n || s[x][y] == '#')
    {
      ll new_score = score + get_score(dist, n, m);
      return get_edge_score(s, n, m, x - dx, y - dy, dx, dy, depth, new_score);
    }
    dist++;
  }
  return 0;
}

int main()
{
  ll n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep1(i, n) cin >> s[i];

  vector<pair<ll, P>> s_xy;
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < n; j++)
    {
      if (s[i][j] == '#')
        continue; // 壁はスコア計算しない

      ll score = 0;
      // 縦横でそれぞれの行を見て, #or壁までの.の個数をカウント
      // 横正方向
      score += get_edge_score(s, n, m, i, j, 1, 0, 0, 0);
      // 横逆方向
      score += get_edge_score(s, n, m, i, j, -1, 0, 0, 0);
      // 縦正方向
      score += get_edge_score(s, n, m, i, j, 0, 1, 0, 0);
      // 縦逆方向
      score += get_edge_score(s, n, m, i, j, 0, -1, 0, 0);

      // cout << "i: " << i << " j: " << j << " score: " << score << endl;
      s_xy.push_back({score, P(i, j)});
    }
  }
  sort(s_xy.begin(), s_xy.end(), [](const pair<ll, P> &a, const pair<ll, P> &b)
       { return a.first > b.first; });

  // cout << "s_xy.size(): " << s_xy.size() << endl;
  // if (s_xy.size() == n * n - m)
  //   cout << "s_xy.size() is expected" << endl;
  for (auto &s : s_xy)
  {
    P p = s.second;
    cout << p.first << " " << p.second << endl;
  }
}
