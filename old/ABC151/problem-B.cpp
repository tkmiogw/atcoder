#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#define FOR(i, start, end) for(i64 i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

//--------------------------------------------------------------------



int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    int goal = m*n - sum;
    int ans = 0;
    if (goal>k) ans = -1;
    else ans = goal;
    cout << ans << endl;
}