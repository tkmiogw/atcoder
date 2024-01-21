#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int a, b;
    cin >> a >> b;
    long long int ans = -1;
    long long int A = a*12.5, B = b*10;
    if (a%2 == 0){
        if ((B-A < 13)&&(B-A > -10)) ans = max(A, B);
    }
    else {
        if ((B-A < 12)&&(B-A > -11)) ans = max(A+1, B);
    }
    cout << ans << endl;
}