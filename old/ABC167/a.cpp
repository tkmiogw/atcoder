#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    string ans = "No";
    rep1(i, n){
        if (s[i]==t[i]) ans = "Yes";
        else{
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
}