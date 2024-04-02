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
    ll n, num_2=0, num_4=0;
    cin >> n;
    vector<ll> a(n, 0);
    rep1(i, n){
        cin >> a[i];
        if (a[i]%4==0) num_4++;
        else if (a[i]%2==0) num_2++;
    }
    if (n%2==0){
        if (num_4*2+num_2>=n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if (num_4*2+num_2>=n-1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}