#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
using namespace std;



void ans() {
    int n, m, v, p;
    cin >> n >> m >> v >> p;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    std::sort(a, a + n, greater<int>());
    int min = a[p-1];
    int ans = 0;
    for (int j=0; j<n; j++) if (a[j] >= min - m) ans++;

    int count = 0;
    for (int i=p; count <= v; i++) {
        if (a[i] != a[i+1]) count++;
    }

    ans = std::min(ans, p+count);
    cout << ans << endl;
}

int main() {
  ans();
  return 0;
}