#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

struct UnionFind {
    vector<ll> par; // par[i]:i�̐e�̔ԍ��@(��) par[3] = 2 : 3�̐e��2

    UnionFind(ll N) : par(N) { //�ŏ��͑S�Ă����ł���Ƃ��ď�����
        for(ll i = 0; i < N; i++) par[i] = i;
    }

    ll root(ll x) { // �f�[�^x��������؂̍����ċA�œ���Froot(x) = {x�̖؂̍�}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y) { // x��y�̖؂𕹍�
        ll rx = root(x); //x�̍���rx
        ll ry = root(y); //y�̍���ry
        if (rx == ry) return; //x��y�̍�������(=�����؂ɂ���)���͂��̂܂�
        par[rx] = ry; //x��y�̍��������łȂ�(=�����؂ɂȂ�)���Fx�̍�rx��y�̍�ry�ɂ���
    }

    bool same(ll x, ll y) { // 2�̃f�[�^x, y��������؂������Ȃ�true��Ԃ�
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }
};

int main() {
    ll n, m, a, b;
    cin >> n >> m;
    map<P, ll> p;
    rep1(i, m){
        cin >> a >> b;
        a--, b--;
        p[make_pair(min(a, b), max(a, b))] = 1;
    }
    UnionFind tree(n);
    for (auto xy: p){
        tree.unite(xy.first.first, xy.first.second);
    }
    vector<ll> count(n);
    rep1(i, n){
        ll cnt = tree.root(i);
        count[cnt]++;
    }
    ll ans = 0;
    rep1(i, n) ans = max(ans, count[i]);
    cout << ans << endl;
    //printf("%.12f", ans);
}