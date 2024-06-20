import subprocess, sys

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

pytmp = "¥n".join(
    [
        "#str型で受け取るとき",
        "s = input() ",
        "#int型で受け取るとき",
        "s = int(input()) ",
        "#float型　(小数)で受け取るとき",
        "s = float(input())",
        "#入力変数が整数の場合",
        "A, B = map(int, input().split())",
        "#入力変数の数がN個の場合",
        "",
        "l = list(map(int, input().split()))",
        "",
        "N, M = map(int, input().split())",
        "#空のリスト",
        "A = []",
        "#リストAにappend()を使って格納していく",
        "for _ in range(M):",
        "    A.append(int(input()))",
        "",
        "N = int(input())",
        "x = list(map(int, input().split()))",
        "y = list(map(int, input().split()))",
        "",
        "N = int(input())",
        "xy = [map(int, input().split()) for _ in range(N)]",
        "x, y = [list(i) for i in zip(*xy)]",
        "",
        "N = int(input())",
        "list = []",
        "for i in range(N):",
        "    a,b=input().split()",
        "    list.append([int(a), b])",
        "",
        "#先に入力変数分の長さを持つlistを作っておく。※N = 5の場合,t = [0,0,0,0,0]",
        "N = int(input())",
        "t = [0] * N",
        "x = [0] * N",
        "y = [0] * N",
        "for i in range(N):",
        "    #上から順番に代入していく",
        "    t[i], x[i], y[i] = map(int, input().split())",
        "",
        "X, Y, A, B, C = map(int, input().split())",
        "P = [int(i) for i in input().split()]",
        "Q = [int(i) for i in input().split()]",
        "R = [int(i) for i in input().split()]",
    ]
)


def output():
    subprocess.run(["mkdir", contest])
    cdir = contest
    # subprocess.run(["touch", cdir+"/README"])
    for i in range(0, len(problem)):
        subprocess.run(
            ["echo", cpptmp], stdout=open(cdir + "/" + problem[i] + ".cpp", "wb")
        )
        # subprocess.run(
        #     ["echo", pytmp], stdout=open(cdir + "/" + problem[i] + ".py", "wb")
        # )
    subprocess.run(["cd", contest])
    return


output()
