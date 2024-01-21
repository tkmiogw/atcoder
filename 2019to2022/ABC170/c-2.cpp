#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


int main() {
    int x, n;
    cin >> x >> n;
    vector<int> p(n, 0), l(110);
    for (int i=0; i<n; ++i) cin >> p[i];
    for (int i=0; i<l.size(); ++i) l[i]=i;
    int num = 1e5;
    int ans = 0;
    for (int i=0; i<n; ++i){
        l[p[i]]=1e9;
    }
    for (int i=0; i<l.size(); ++i){
        if (num > abs(x-l[i])){
            num = abs(x-l[i]);
            ans = l[i];
        }
    }
    cout << ans << endl;
}