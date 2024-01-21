#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> a, p;


ll layer(ll n, ll x){
    if (n==0) return 1;
    ll len = (1LL<<(n+1)) - 3; //2^(n+1) - 3
    ll num = (1LL<<n) - 1; //2^(n) - 1, n-1‚ð‚Ý‚½‚¢
    if (x==1) return 0;
    else if (x <= 1 + len) return layer(n-1, x-1);
    else if (x == len + 2) return num + 1;
    else if (x <= (len + 1) * 2) return num + 1 + layer(n-1, x-len-2);
    else return num*2 + 1;
}


int main() {
    ll n, x;
    cin >> n >> x;
    ll ans = layer(n, x);
    cout << ans << endl;
    //printf("%.12f", ans);
}