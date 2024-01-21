#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> Eratosthenes(ll N){
    vector<ll> is_prime(N+1, 1);
    for(ll i=2; i<=N; i++){
        if(is_prime[i]==1){
            for(ll j=2*i; j<=N; j+=i){
                is_prime[j] = i;
            }
        }
    }
    return is_prime;
}

vector<ll> prime(ll n, const vector<ll> e){
    vector<ll> ret;
    while (e[n]!=n){
        ret.push_back(e[n]);
        while (n%e[n]==0) n = n/e[n];
    }
    return ret;
}

int main() {
    ll n, am=0;
    cin >> n;
    vector<ll> a(n, 0), p(1e6+1, 0);
    rep1(i, n){
        cin >> a[i];
        am = max(am, a[i]);
        p[a[i]]++;
    }
    bool flag = true;
    for(ll i=2; i<=1e6; i++){
        ll cnt = 0;
        for (ll j=i; j<=1e6; j+=i) cnt += p[j];
        if (cnt>=2){
            flag = false;
            break;
        }
    }
    if (flag){
        cout << "pairwise coprime" << endl;
        return 0;
    }
    ll s = a[0];
    rep1(i, n-1) s = gcd(a[i+1], s);
    if (s==1) cout << "setwise coprime" << endl;
    else  cout << "not coprime" << endl;
    //printf("%.12f", ans);
}