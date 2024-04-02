#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> Eratosthenes(const ll N){
    vector<bool> is_prime( N + 1 );
    for(ll i = 0; i <= N; i++ ){
        is_prime[i] = true;
    }
    vector<ll> P;
    for(ll i = 2; i <= N; i++ ){
        if(is_prime[i]){
            for(ll j = 2 * i; j <= N; j += i ){
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> P = Eratosthenes(n);
    vector<ll> a(n+1, 1), b(n+1);

    for (auto num : P){ //素数ごとに計算
        for (ll i=num; i<=n; i += num){
            ll res = i;
            ll count = 1;
            while (res%num == 0){
                res /= num;
                count++;
            }
            if (a[i]==1) a[i] = count;
            else a[i] *= count;
        }
    }
    b[1] = 1;
    rep2(i, 2, n+1){
        b[i] += b[i-1] + i*a[i];
    }
    cout << b[n] << endl;
}