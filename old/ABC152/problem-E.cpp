#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include<algorithm>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (b==0) return a;
    else return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b) {
    long long int ans = a * b / gcd(a, b)
    return ans %= 1000000007;
}

int main() {
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    unsigned long long int num = 1;
    for(int i=0; i<n; i++) {
      num = lcm(a[i], num);
    }
    unsigned long long ans = 0;
    for(int i=0; i<n; i++) ans += num/a[i];
    ans %= 1000000007;
    cout << ans << endl;
}
