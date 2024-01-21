#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<ll> IntegerToVector(ll bit, ll N) {
    vector<ll> S;
    for (ll i = 0; i < N; ++i) {
        if (bit & (1 << i)) S.push_back(1);
        else S.push_back(0);
    }
    return S;
}

int main() {
    ll s;
    cin >> s;
    vector<ll> num;
    while (s>0){
        num.push_back(s%10);
        s /= 10;
    }
    reverse(num.begin(), num.end());
    ll ans = 0;
    ll N = num.size() - 1;
    for (ll bit = 0; bit < (1 << N); ++bit) {
        // ‚Ç‚ê‚ğ‘I‚Ô‚©
        vector<ll> S = IntegerToVector(bit, N);
        S.push_back(1);
        // •”•ªW‡‚É‘Î‰‚·‚é‘˜a
        ll add = 0;
        for (ll i=0; i<(N+1); i++){
            add = add*10 + num[i];
            if (S[i]==1){
                ans += add;
                add = 0;
            }
        }
    }
    cout << ans << endl;
    //printf("%.12f", ans);
}