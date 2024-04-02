#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll n;
void dfs(string s, char ms){
    if (s.size()==n) cout << s << endl;
    else{
        for (char i='a'; i<=ms; i++){
            if (ms==i) dfs(s+i, (char)(ms+1));
            else dfs(s+i, ms);
        } 
    }
}

int main() {
    cin >> n;
    dfs("", 'a');
    //printf("%.12f", ans);
}