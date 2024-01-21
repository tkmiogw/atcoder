#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    string ans = "No";
    if ((s[2]==s[3])&&(s[4]==s[5])) ans = "Yes";
    cout << ans << endl;
}