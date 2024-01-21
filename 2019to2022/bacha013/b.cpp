#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    vector<ll> a(2);
    priority_queue<vector<ll>, vector<vector<ll> >, greater<vector<ll> > > q;
    rep1(i, n){
        cin >> a[1] >> a[0];
        q.push(a);
    }
    ll cnt = 0;
    while (!q.empty()){
        auto now = q.top(); q.pop();
        if (cnt + now[1] > now[0]){
            cout << "No" << endl;
            return 0;
        }
        cnt += now[1];
    }
    cout << "Yes" << endl;
    //printf("%.12f", ans);
}