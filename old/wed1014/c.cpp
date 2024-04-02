#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll oddsolve(ll a){
    return (a+1)/2 % 2;
}
ll solve(ll a){
    if (a%2==1) return oddsolve(a);
    else return oddsolve(a+1) ^ (a+1);
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << (solve(a-1) ^ solve(b)) << endl;
    //printf("%.12f", ans);
}