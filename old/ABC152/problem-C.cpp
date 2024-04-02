#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for(int i=0; i<n; i++) cin >> p[n-i-1];
    int ans = 0, judge = 1;
    int a[n] = {};
    for(int i=0; i<n; i++) {
      a[p[i]] = 1;
      if (p[i] == judge) {
        ans++;
        while (a[judge]) judge++;
      }
    }
    cout << ans << endl;
}