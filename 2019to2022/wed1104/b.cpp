#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

struct UnionFind {
    vector<ll> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    UnionFind(ll N) : par(N, -1) { }

    ll root(ll x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] < 0) return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y) { // xとyの木を併合
        ll rx = root(x); //xの根をrx
        ll ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        if (par[rx]>par[ry]) swap(rx, ry);
        par[rx] += par[ry];
        par[ry] = rx; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(ll x, ll y) { // 2つのデータx, yが属する木が同じならtrueを返す
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }
    
    ll size(ll x){
        return -par[root(x)];
    }
};

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll> > ng(n);
    UnionFind tree(n);
    rep1(i, m){
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        ng[a].push_back(b);
        ng[b].push_back(a);
        tree.unite(a, b);
    }
    rep1(i, k){
        ll c, d;
        cin >> c >> d;
        c--;
        d--;
        if (tree.same(c, d)){
            ng[c].push_back(d);
            ng[d].push_back(c);
        }
    }
    rep1(i, n){
        ll ans = tree.size(i) - 1;
        ans -= ng[i].size();
        if (i<n-1) cout << ans << " ";
        else cout << ans << endl;
    }
}