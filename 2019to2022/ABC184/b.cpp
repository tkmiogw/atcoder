#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    for (ll i=0; i<n; i++){
        if (s[i]=='o') x++;
        else if (s[i]=='x') x = max((ll)0, x-1);
    }
    cout << x << endl;
    //printf("%.12f", ans);
}