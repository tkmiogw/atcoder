#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

string Itoa(ll v, int base){
	static const char table[] = "abcdefghijklmnopqrstuvwxyz";
	string ret;
	//static numeric_limits<TypeInt> t;
	ll n = v;
	//if (t.is_signed) {
	//	if (v < 0) n *= -1;
	//}
	while (n >= base) {
		ret += table[n%base];
		n /= base;
        --n;
	}
	ret += table[n];
	//if (t.is_signed) {
	//	if (v < 0 && base == 10) ret += '-';
	//}
	// 文字列の順番を逆にする
	reverse(ret.begin(), ret.end());

	return ret;
}



int main(void)
{
    ll n;
    cin >> n;
    cout << Itoa(n-1, 26) << endl;
}
