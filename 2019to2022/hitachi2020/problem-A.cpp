#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n = s.length();
    string ans = "Yes";
    if (n%2!=0) ans = "No";
    for(int i=0; i<n-1; i+=2){
        if (!((s[i] == 'h')&&(s[i+1] == 'i'))) ans = "No";
    }    
    cout << ans << endl;
}