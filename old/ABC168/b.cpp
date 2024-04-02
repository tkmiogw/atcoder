#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll l = s.length();
    string ans = "";
    if (k >= l) ans = s;
    else{
        rep1(i,k){
            ans.push_back(s[i]);
        }
        ans += "...";
    }
    cout << ans << endl;
}