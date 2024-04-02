#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    string w;
    ll check = 0;
    rep1(i, n){
        cin >> w;
        string ans = "";
        rep1(j, w.size()){
            if (w[j]=='b' | w[j]=='c' | w[j]=='B' | w[j]=='C') ans.push_back('1');
            if (w[j]=='d' | w[j]=='w' | w[j]=='D' | w[j]=='W') ans.push_back('2');
            if (w[j]=='t' | w[j]=='j' | w[j]=='T' | w[j]=='J') ans.push_back('3');
            if (w[j]=='f' | w[j]=='q' | w[j]=='F' | w[j]=='Q') ans.push_back('4');
            if (w[j]=='l' | w[j]=='v' | w[j]=='L' | w[j]=='V') ans.push_back('5');
            if (w[j]=='s' | w[j]=='x' | w[j]=='S' | w[j]=='X') ans.push_back('6');
            if (w[j]=='p' | w[j]=='m' | w[j]=='P' | w[j]=='M') ans.push_back('7');
            if (w[j]=='h' | w[j]=='k' | w[j]=='H' | w[j]=='K') ans.push_back('8');
            if (w[j]=='n' | w[j]=='g' | w[j]=='N' | w[j]=='G') ans.push_back('9');
            if (w[j]=='z' | w[j]=='r' | w[j]=='Z' | w[j]=='R') ans.push_back('0');
        }
        if (ans.size()==0) continue;
        if (check==0){
            cout << ans;
            check++;
        }
        else cout << " " << ans; 
    }
    cout << endl;
}