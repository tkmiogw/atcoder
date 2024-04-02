#include <bits/stdc++.h>
using namespace std;



int main() {
    long long int h;
    cin >> h;
    int count = 0;
    while(true){
        if (h == 1) break;
        h /= 2;
        count++;
    }
    long long int ans = 0;
    for(int i=0; i<count+1; i++){
        ans += (long long)std::pow(2,i);
    }
    cout << ans << endl;
}