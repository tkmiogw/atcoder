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
    ll n, m, p, y;
    cin >> n >> m;
    vector<vector<ll> > pq;
    rep1(i, m){
        cin >> p >> y;
        vector<ll> res;
        res.push_back(p);
        res.push_back(y);
        res.push_back(i);
        pq.push_back(res);
    }
    sort(pq.begin(), pq.end());
    priority_queue<vector<ll> > ans;
    ll count;
    rep1(i, n){
        vector<ll> cnt(3);
        cnt[0] = pq[i][2];
        cnt[1] = pq[i][0];
        if (i == 0) count = 1;
        else if (pq[i-1][0]==pq[i][0]) count++;
        else count = 1;
        cnt[2] = count;
        ans.push(cnt);
    }
    std::ostringstream oss;
    while (!ans.empty()){
        auto res = ans.top(); ans.pop();
        char *numStr;
        sprintf(numStr, "%06lld", res[1]);
        cout << numStr;
        sprintf(numStr, "%06lld", res[2]);
        cout << numStr << endl;
    }
}