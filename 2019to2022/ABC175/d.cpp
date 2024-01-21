#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> p, c, visit, sum;

vector<ll> getcycle(ll ndx){
    vector<ll> mark;
    ll cnt = 0;
    ll sums = 0;
    while (!(visit[p[ndx]])){
        ndx = p[ndx];
        mark.push_back(c[ndx]);
        sums += p[ndx];
        visit[ndx]++;
        cnt++;
    }
    sum.push_back(sums);
    return mark;
}

int main() {
    ll n, k;
    cin >> n >> k;
    p.resize(n);
    c.resize(n);
    visit.resize(n);
    rep1(i, n){
        cin >> p[i];
        p[i]--;
    }
    rep1(i, n){
        cin >> c[i];
    }
    vector<vector<ll> > m;
    rep1(i, n){
        if (visit[i]){
            m.push_back(getcycle(i));
        }
    }
    ll m_size = m.size();
    ll add;
    ll ans = 0;
    vector<ll> res, num, aad;
    rep1(i, m_size){
        ll l = m[i].size();
        res.push_back(k % l);
        num.push_back(k / l);
        for (ll j=0; j<(2*l); j++){
            add = 0;
            for (ll k=j; k-j+1<=(res[i]); k++){
                add += m[i][k];
                ans = max(ans, add);
            }
        }
        aad.push_back(add);
    }
    rep1(i, m_size){
        if (sum[i]>0) ans = aad[i] + sum[i]*num[i];
        else ans = aad[i];
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}