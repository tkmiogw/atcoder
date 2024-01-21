#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

const ll N = 3234566667;

//A = 格納場所, num = 現在の数
void lun(vector<ll> &A, ll num) {
    if (num > N) return;
    A.push_back(num);
    ll res = num%10;
    for (ll i=res-1; i<=res+1;i++){
        if (0<=i && i <= 9){
            lun(A, num*10+i);
        }
    }
}

int main() {
    ll K;
    cin >> K;
    vector<ll> A;
    rep2(i,1,10) lun(A, i);
    sort(A.begin(), A.end());
    cout << A[K-1] << endl;
}

