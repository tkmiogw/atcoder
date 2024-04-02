#include <bits/stdc++.h>
#include <numeric>
using namespace std;

//--------------------------------------------------------------------
int count(int x){
    int count = 0;
    while (x%2 == 1){
        x /= 2;
        count++;
    }
    return count;
}

int gcd(int a, int b) {
   if (a%b == 0)　return(b);
   else return(gcd(b, a%b));
}

int lcm(int a, int b) {
   return a * b / gcd(a, b);
}


int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    bool judge = true;
    for(int i=0; i<n-1; i++) {
        if(!(count(a[i]) == count(a[i+1]))){
            judge = false;
            break;
        }
    }

    int ans = 0;
    if (judge) {
        int t = a[0];
        for(int i=1; i<n; i++) {
            t = lcm(t,a[i]);
        }
        ans = 2*m / t;
        if(ans%2 == 0) ans /= 2;
        else ans = (ans+1) / 2;
    }
    
    cout << ans << endl;
}