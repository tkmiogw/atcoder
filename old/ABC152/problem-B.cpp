#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    string ans = "";
    if (a <= b) {
      char a2 = '0' + a;
      ans = std::string(b, a2);
    }
    else {
      char b2 = '0' + b;
      ans = std::string(a, b2);
    }
    cout << ans << endl;
}