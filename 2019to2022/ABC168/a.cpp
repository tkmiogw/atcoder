#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    string n;
    cin >> n;
    ll id = n.length() - 1;
    char res = n[id];
    string ans;
    if (res == '3') ans = "bon";
    else if (res == '0' | res == '1' | res == '6' | res == '8') ans = "pon";
    else ans = "hon";
    cout << ans << endl;
}