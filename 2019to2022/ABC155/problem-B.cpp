#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i]; 
    string judge = "APPROVED";
    for(int i=0; i<n; i++){
        if ((a[i]%2 == 0)&&(!(a[i]%3==0||a[i]%5==0))) judge = "DENIED";
    }
    cout << judge << endl;
}