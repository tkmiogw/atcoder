#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
const ll MOD = 1e9 + 7;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

map<ll,ll> prime;//素因数分解でそれぞれの素数がいくつ出てきたかを保存するmap

//O(√n)
//整列済み(mapはkeyで自動で整列される)
void prime_factorize(ll num){
    if(num<=1) return;
    ll l=sqrt(num);
    for (ll i=2; i<=(l); i++){
        if(num%i==0){
            prime_factorize(i);
            prime_factorize(num/i);
            return;
        }
    }
    //mapでは存在しないkeyの場合も自動で構築される
    prime[num]++;
    return;
}

int main() {
    ll n, num;
    cin >> n;
    ll ans = 1;
    for (ll i=2; i<(n+1); i++){
        num = i;
        prime_factorize(num);
    }
    for (auto x: prime){
        ans *= x.second + 1;
        ans %= MOD;
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}