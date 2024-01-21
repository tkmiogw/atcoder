#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll k;
    cin >> k;
    ll cnt = k%10;
    if (cnt%2==0 | cnt%5==0){
        cout << -1 << endl;
        return 0;
    }
    ll a = 7;
    for (ll i=1; i<1e7; i++){
        if (a%k==0){
            cout << i << endl;
            return 0;
        }
        else a = 10*(a%k)+7;
    }
    cout << -1 << endl;
}