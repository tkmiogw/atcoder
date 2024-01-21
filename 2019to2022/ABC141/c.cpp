#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> point(n, k-q);
    ll a = 0;
    rep1(i, q){
        cin >> a;
        point[a-1]++;
    }
    rep1(i,n){
        if (point[i]<1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}