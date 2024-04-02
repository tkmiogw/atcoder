#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = LLONG_MAX;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

ll ans;
void dfs(ll num, ll coin, vector<ll> &V){
    if (num==1){
        ans = min(coin+V[3], ans);
        return;
    }
    if ((num%2 != 0)&&(num%3 != 0)&&(num%5 != 0)){
        dfs(num-1, coin+V[3], V);
        dfs(num+1, coin+V[3], V);
    }
    if (num%2 == 0) dfs(num/2, coin+V[0], V);
    if (num%3 == 0) dfs(num/3, coin+V[1], V);
    if (num%5 == 0) dfs(num/5, coin+V[2], V);
}



int main(){
    ll T;
    cin >> T;
    rep1(i, T){
        ll N;
        vector<ll> V(4);
        cin >> N;
        rep1(j, 4) cin >> V[j];
        ans = INF;
        dfs(N, 0, V);
        cout << ans << endl;
    }
}