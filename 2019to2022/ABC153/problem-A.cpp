#include <bits/stdc++.h>
using namespace std;


int main() {
    int h, a;
    cin >> h >> a;
    int attack = h / a;
    if (h%a != 0) attack++;
    cout << attack << endl;
}