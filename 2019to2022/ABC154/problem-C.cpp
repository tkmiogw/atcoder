#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    std::sort(a, a + n);
    string ans = "YES";
    for(int i=0; i<n-1; i++){
        if (a[i] == a[i+1]){
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
}