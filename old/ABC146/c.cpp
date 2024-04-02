#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll keta(ll num){
    ll count = 0;
    while (num>0){
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll left = 1;
    ll right = 1e9;
    ll mid;
    while (left<right){
        mid = (left+right)/2;
        if (a*mid+b*keta(mid)<=x) left = mid+1;
        else right = mid;
    }
    for (ll i=right+5; i>right-5; i--){
        if (a*i+b*keta(i)<=x && i<=1e9 && i>=0) {
            cout << i << endl;
            break;
        }
    }
}