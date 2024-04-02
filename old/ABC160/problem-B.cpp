#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int x;
    cin >> x;
    long long int a=0, b=0;
    a = x/500;
    b = (x - 500*a)/5;
    long long int ans = 1000*a + 5*b;
    cout << ans << endl;
}