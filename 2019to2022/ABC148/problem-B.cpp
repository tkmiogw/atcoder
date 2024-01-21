#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, t;
    std:cin >> n >> s >> t;
    string out;
    for (int i = 0; i < n; ++i) {
        cout << s[i] << t[i];
    }
}