#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
const double pi = 3.141592653589793;

int main() {
    long double a, b, h, m;
    cin >> a >> b >> h >> m;
    long double theta = pi*(60*h - 11*m)/(double)360;
    long double ans = a*a + b*b - 2*a*b*(double)cos(theta);
    ans = sqrt(ans);
    cout << fixed << setprecision(9) << ans << endl;
}