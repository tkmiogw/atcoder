#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A;
  string op;
  for (int i=0; i<N; i++){
    cin >> op >> B;
    if (op == "+") {
      A += B;
    }
    if (op == "-") {
      A -= B;
    }
    if (op == "*") {
      A *= B;
    }
    if (op == "/") {
      if (B == 0){
        cout << "error" << endl;
        break;
      }
      else A /= B;
    }
    cout << i+1 << ":" << A << endl; 
  }
}
