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
    ll n, c;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll> b;
    rep1(i, n){
        cin >> a[i] >> c;
        b[c]++;
    }
    priority_queue<P> pq;
    for (auto x: b){
        pq.push(make_pair(x.second, x.first));
    }
    vector<ll> ans(n);
    ll check=-1, count=0, ndx = 0;
    while (!pq.empty()){
        P p = pq.top(); pq.pop();
        count++;
        ll res = p.first;
        for (ll i=ndx; i<min(ndx+p.first, n); i++){
            if (a[i]==p.second){
                break;
            }
            check = pq.size();
            count = 0;
            ans[i] = p.second;
            ndx++;
            res--;
        }
        if (count==check) {
            cout << "No" << endl;
            return 0;
        }
        if (res>0) pq.push(make_pair(res, p.second));
    }
    cout << "Yes" << endl;
    rep1(i, n){
        cout << ans[i] << " ";
        if (i==n-1) cout << ans[i] << endl;
    }
    //printf("%.12f", ans);
}