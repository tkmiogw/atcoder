#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    int p[n];
    int sum[n+1];
    for(int i=0; i<n; i++)cin >> p[i];
    sum[0] = 0;
    for(int i=0; i<n; i++)sum[i+1] = sum[i]+p[i];
    int max = 0;
    for(int i=0; i<=n-k; i++){
        int val = sum[k+i] - sum[i];
        if (max < val) max = val;
    }
    double ans = ((max + k) / 2.0);
    printf("%.16f", ans);
}