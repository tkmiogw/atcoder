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
    ll n, k;
    cin >> n >> k;
    rep1(i, k)
    {
        if (n % 200 == 0)
        {
            n /= 200;
        }
        else
        {
            n = n * 1000 + 200;
        }
    }
    cout << n << endl;
    // printf("%.12f", ans);
}
