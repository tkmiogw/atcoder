#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep(i, n) for (ll i=0; i<(n); i++) 


int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i=1; i<(n+1); i++){
        if ((i%3!=0)&&(i%5!=0)) sum += i;
    }
    cout << sum << endl;
}