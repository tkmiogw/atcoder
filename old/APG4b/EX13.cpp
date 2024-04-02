#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  int sum = 0;
  for(int i=0; i<N; i++){
    cin >> a.at(i);
    sum += a.at(i);
  }
  int ave = sum/N;
  for(int i=0; i<N; i++){
    int ans = 0;
    ans = ave - a.at(i);
    if (ans < 0) ans *= -1;
    cout << ans << endl;    
  }
}
