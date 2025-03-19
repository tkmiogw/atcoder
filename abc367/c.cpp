#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL << 60;
#define rep1(i, n) for (ll i = 0; i < (n); i++)
#define rep2(i, k, n) for (ll i = k; i < (n); i++)
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
vector<vector<ll>> ans;
void makeans(ll n, ll add, ll cnt, vector<ll> tmp, vector<ll> r){
  tmp.push_back(add);

  if (cnt == n){
    ans.push_back(tmp);
    return;
  }
  for (ll i = 1; i <= r[cnt]; i++){
    makeans(n, i, cnt+(ll)1, tmp, r);
  }
}


int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> r(n, 0);
  rep1(i, n) cin >> r[i];

  for (ll i = 1; i <= r[0]; i++){
    vector<ll> tmp;
    makeans(n, i, 1, tmp, r);
  }


  sort(ans.begin(), ans.end());
  for (auto& v: ans){
    ll s = reduce(begin(v), end(v));
    if (s%k==0){
      for (auto& e: v){
        cout << e << " ";
      }
      cout << endl;
    }
  }
  // printf("%.12f", ans);
}


