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
    string s;
    cin >> s;
    ll n = s.size();
    map<ll,ll> m;
    rep1(i, n){
        ll res = s[i] - '0';
        m[res]++;
    }
    if (n==1){
        if (s[0]=='8'){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (n==2){
        ll a = s[0] - '0';
        ll b = s[1] - '0';
        if ((10*a+b)%8==0 || (10*b+a)%8==0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (ll i=0; i<1000; i+=8){
        ll now = i;
        map<ll, ll> cnt;
        rep1(k, 3){
            cnt[now%10]++;
            now /= 10;
        }
        bool judge = true;
        for (auto x: cnt){
            if (m[x.first]<x.second) judge = false;
        }
        if (judge){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    //printf("%.12f", ans);
}