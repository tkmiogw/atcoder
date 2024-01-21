#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

ll N, M, Q;
vector<ll> a, b, c, d;


ll score(const vector<ll> &A){
  ll res = 0;
  rep1(i,Q){
    if (A[b[i]]-A[a[i]] == c[i]) res += d[i];
  }
  return res;
}

ll dfs(vector<ll> &A) {
  if (A.size() == N){
    return score(A);
  }
  ll res = 0;
  ll prev_last = (A.empty() ? 0 : A.back());
  for (ll v = prev_last; v < M; v++){
    A.push_back(v);
    res = max(res, dfs(A));
    A.pop_back();
  }
  return res;
}


int main() {
  cin >> N >> M >> Q;
  a.resize(Q); b.resize(Q); c.resize(Q); d.resize(Q);
  rep1(i,Q){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--, b[i]--;
  }
  vector<ll> A;
  cout << dfs(A) << endl;
}