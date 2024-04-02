#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

bool check(vector<P> s){
    ll h = 0;
    for (P p : s){
        ll b = h + p.first;
        if (b < 0) return false;
        h += p.second;
    }
    return true;
}


int main() {
    ll n, sum = 0;
    cin >> n;
    string s;
    vector<P> ls, rs;
    rep1(i,n){
        cin >> s;
        ll m = 0, d = 0;
        rep1(j, s.size()){
            if (s[j] == '(') ++d;
            else --d;
            m = min(m,d);
        }
        if (d>0) ls.emplace_back(m, d);
        else rs.emplace_back(m-d, -d);
        sum += d;
    }
    sort(ls.rbegin(), ls.rend());
    sort(rs.rbegin(), rs.rend());
    string ans = "No";
    if (check(rs) && check(ls) && sum == 0) ans = "Yes";
    cout << ans << endl;
}