#include <bits/stdc++.h>
using namespace std;


int main() {
    int h, n;
    cin >> h >> n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    string judge = "Yes";
    if (sum < h) judge = "No";
    cout << judge << endl;
}