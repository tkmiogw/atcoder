#include <bits/stdc++.h>
using namespace std;


int main() {
    string s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;
    if (s == u) a--;    
    if (t == u) b--;    
    cout << a << " " << b << endl;
}