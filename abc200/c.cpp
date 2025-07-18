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
    ll n, a;
    cin >> n;
    map<ll, ll> m{};
    rep1(i, n)
    {
        cin >> a;
        m[a % 200]++;
    }
    ll ans = 0;
    for (auto e : m)
    {
        ans += e.second * (e.second - 1) / 2;
    }
    cout << ans << endl;
    // printf("%.12f", ans);
}
