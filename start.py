import subprocess, sys, os

# print("what is the  contest? ex: ABC163...")
contest = str(sys.argv[1])


problem = "abcdefgh"
cpptmp = """#include <bits/stdc++.h>
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

int main() {
  string s, t;
  cin >> s >> t;
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  rep1(i, n) cin >> a[i];
  ll ans = 0;
  cout << ans << endl;
  // printf("%.12f", ans);
}

"""

def output():
    subprocess.run(["acc", "new", contest])
    cdir = contest
    for i in range(0, len(problem)):
        if not os.path.exists(f"{cdir}/{problem[i]}"):
            print("doesn't exists")
            continue
        subprocess.run(
            ["echo", cpptmp], stdout=open(f"{cdir}/{problem[i]}/{problem[i]}.cpp", "wb")
        )
    subprocess.run(["cd", cdir])
    return


output()
