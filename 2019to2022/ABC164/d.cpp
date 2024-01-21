#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

//累積和的なものを考えると良いらしい
int main() {
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> a(2019, 0);
    ll fac = 1;
    ll cur = 0;
    a[cur]++;
    rep1(i, n){
        //1桁目から順になめていく
        ll add = s[n-1-i] - '0';
        //i桁目までの数のあまりを考えていけばよい
        cur = (cur + fac*add) % 2019;
        //倍数を増やしていけばいい(これはオーバーフロー回避のため)
        fac = (fac*10) % 2019;
        //mod2019の値に合わせて格納
        a[cur]++;
    }
    ll ans = 0;
    rep1(i, a.size()){
        ans += a[i]*(a[i]-1)/2;
    }
    cout << ans << endl;
}