#include <bits/stdc++.h>
using namespace std;
long long int big = 10e100;

int main() {
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int x = n / (a + b);
    long long int y = n % (a + b);
    long long int ans = a*x + min(a, y);
    cout << ans << endl;
}