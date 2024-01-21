#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n, k;
    cin >> n >> k;
    long long int h[n];
    for(int i=0; i<n; i++) cin >> h[i];
    std::sort(h, h + n, std::greater<>());
    long long int ans = 0;
    for(int i=k; i<n;i++) ans += h[i];
    cout << ans << endl;
}