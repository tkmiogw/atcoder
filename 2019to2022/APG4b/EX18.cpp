#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
    A.at(i)--;
    B.at(i)--;
  }
  vector<vector<char>> ans(N,vector<char>(N, '-'));
  for (int i = 0; i < M; i++) {
    ans.at(A[i]).at(B[i]) = 'o';
    ans.at(B[i]).at(A[i]) = 'x';
  }
  // (ここで"試合結果の表"の2次元配列を宣言)
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N-1; j++) {
      cout << ans.at(i).at(j) << ' ';
    }
    cout << ans.at(i).at(N-1) << endl;
  }
}
