#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

map<ll, ll> m;
ll cnt=0, n;

void prime_factorize(ll N) {
    bool flag = true;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // Žw”

        // Š„‚ê‚éŒÀ‚èŠ„‚è‘±‚¯‚é
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        if (m[a]!=0) flag = false;
        m[a]++;
    }
    if (flag) cnt++;
}

int main() {
    cin >> n;
    vector<ll> a(n);
    cnt = 0;
    rep1(i, n){
        cin >> a[i];
        prime_factorize(a[i]);
    }
    if (cnt==n) cout << "pairwise coprime" << endl;
    else{
        ll g = a[0];
        for (ll i=1; i<(n); i++) g = gcd(g, a[i]);
        if (g == 1) cout << "setwise coprime" << endl;
        else cout << "not coprime" << endl;
    }
    //printf("%.12f", ans);
}