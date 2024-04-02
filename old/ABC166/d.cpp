#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll x;
    cin >> x;
    ll n = 1000;
    vector<ll> num(n,0);
    ll a = 0, b = 0;
    rep2(i,1,n) num[i] = pow(i,5);
    rep2(i,0,n){
        rep2(j,0,i){
            if (num[i]-num[j]==x){
                a = i;
                b = j;
                break;
            }
            if (num[i]+num[j]==x){
                a = i;
                b = -j;
                break;
            }
        }
        if (a!=0) break;
    }
    cout << a << " " << b << endl;
}