#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++) 
using namespace std;
using ll = long long;
using P = pair<int, int>;
const ll INF = 10000000000000;


//queue
int main() {
    ll k;
    cin >> k;
    queue<ll> q;
    for (int i=1; i<10; i++){
        q.push(i);
    }
    ll x = 0;
    rep(i,k){
        x = q.front(); q.pop();
        ll d = x%10;
        if (d != 0) q.push(10*x + d-1);
        q.push(10*x + d);
        if (d != 9) q.push(10*x + d+1);
    }
    cout << x << endl;
    return 0;
}