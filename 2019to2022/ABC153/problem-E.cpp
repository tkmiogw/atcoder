#include <bits/stdc++.h>
using namespace std;



int main() {
    int h, n;
    cin >> h >> n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    cout << count(a[0],h) << endl;
}