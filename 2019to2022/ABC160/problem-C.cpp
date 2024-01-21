#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int k, n, ans;
    cin >> k >> n;
    vector<long long int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++){
        b[i] = a[i+1] - a[i];
    }
    b[n-1] = k - a[n-1] + a[0];
    ans = k - *std::max_element(b.begin(), b.end());
    cout << ans << endl;
}