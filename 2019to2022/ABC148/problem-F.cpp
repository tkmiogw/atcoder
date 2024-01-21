//sample answer
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> to[100005];
int n;

vector<int> dist;
void dfs(int v, int d=0, int p=-1) { //to: 各住所に移動可能な住所が入っている
  dist[v] = d;                       
  for (int u : to[v]) {
    if (u == p) continue; //行き止まりならスキップ
    dfs(u,d+1,v);
  }
}
vector<int> calcDist(int s) {
  dist = vector<int>(n);
  dfs(s);
  return dist;
}

int main() {
  cin >> n;
  int s, t;
  cin >> s >> t;
  --s; --t;
  rep(i,n-1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> distS = calcDist(s);
  vector<int> distT = calcDist(t);

  int mx = 0;
  rep(i,n) {
    if (distS[i] < distT[i]) {
      mx = max(mx, distT[i]);
    }
  }
  int ans = mx-1;
  cout << ans << endl;
  return 0;
}
